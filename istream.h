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

/**
 * Module for manipulating with input streams (string or file)
 * used for simpler testing with fixed strings instead of files
 * laying around.
 */

#include "system.h"
#include "error.h"

#ifndef ISTREAM_H_
#define ISTREAM_H_
	typedef enum {
		IStream_NONE,
		IStream_FILE,
		IStream_STRING
	} IStreamSource;

	typedef struct {
		IStreamSource src_type;
		FILE *src_file;
		char *src_string;

		// Pointer used for emulating FILE
		char *current_char;
	} IStream;

	/**
	 * IStream constructor
	 * @return Initialized IStream
	 */
	IStream initIStream();

	/**
	 * IStream destructor, structure may be reused
	 */
	void destroyIStream(IStream *stream);

	/**
	 * Assigns file to stream, may be called only once per structure
	 */
	bool assignFile(IStream *stream, char *input_file);

	/**
	 * Assigns regular string (null terminated chars) to IStream
	 * @param stream         Pointer to IStream
	 * @param array_of_chars Pointer to first char of string
	 */
	void assignString(IStream *stream, char *array_of_chars);

	/**
	 * Returns next char from stream, EOF if end of stream reached
	 * @param  stream Pointer to IStream
	 * @return        char in type of int due to EOF
	 */
	int nextChar(IStream *stream);

	/**
	 * fgetc(char, FILE) equivalent; returns char back to stream
	 * @param stream Pointer to IStream
	 * @param c      Character in int
	 */
	void returnChar(IStream *stream, int c);
#endif
