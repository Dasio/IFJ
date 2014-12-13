/*
 * Project name:
 * Implementace interpretu imperativního jazyka IFJ14
 *
 * Repository:
 * https://github.com/Dasio/IFJ
 *
 * Team:
 * Dávid Mikuš			(xmikus15)
 * Peter Hostačný		(xhosta03)
 * Tomáš Kello			(xkello00)
 * Adam Lučanský		(xlucan01)
 * Michaela Lukášová		(xlukas09)
 */

#include "istream.h"

IStream initIStream() {
	IStream stream = {
		.src_type = IStream_NONE,
		.src_file = NULL,
		.src_string = NULL,

		.current_char = NULL
	};

	return stream;
}

void destroyIStream(IStream *stream) {
	assert(stream);

	if(stream->src_type == IStream_FILE && stream->src_file != NULL) {
		fclose(stream->src_file);
	}

	if(stream->src_type == IStream_STRING) {
		stream->src_string = NULL;
		stream->current_char = NULL;
	}

	stream->src_type = IStream_NONE;

	// if src_type == IStream_NONE, nothing happens
}

bool assignFile(IStream *stream, char *input_file) {
	assert(stream);
	assert(input_file);
	assert(stream->src_type == IStream_NONE);

	stream->src_type = IStream_FILE;
	stream->src_file = fopen(input_file, "r");
	if(stream->src_file == NULL)
		setError(ERR_CannotOpenFile);

	return stream->src_file;
}

void assignString(IStream *stream, char *array_of_chars) {
	assert(stream);
	assert(array_of_chars);
	assert(stream->src_type == IStream_NONE);

	stream->src_type = IStream_STRING;
	stream->src_string = array_of_chars;
	stream->current_char = array_of_chars;
}

int nextChar(IStream *stream) {
	assert(stream);
	assert(stream->src_type != IStream_NONE);

	if(stream->src_type == IStream_FILE) {
		assert(stream->src_file);
		return fgetc(stream->src_file);
	} else {
		// IStream_STRING
		if(*(stream->current_char) != (char) 0) {
			// SIDE EFFECT INCREMENT !!
			return (int) *(stream->current_char++);
		} else {
			return EOF;
		}
	}
}

void returnChar(IStream *stream, int c) {
	assert(stream);
	assert(stream->src_type != IStream_NONE);
	assert(c != EOF && "returned character cannot be EOF");

	if(stream->src_type == IStream_FILE) {
		ungetc(c, stream->src_file);
	} else {
		// string
		if(stream->current_char > stream->src_string)
			stream->current_char--;
	}
}
