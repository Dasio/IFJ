/*
 * memory_mgmt.c
 *
 *  Created on: 31.8.2014
 *      Author: Adam Lucansky <xlucan01@stud.fit.vutbr.cz>
 */

#include "system.h"
#include "memory_mgmt.h"

static MemList memory_layout = {
	.head = NULL,
	.tail = NULL
};

static inline void initMemItemAndAppend(void* mem_ptr, size_t len) {
	MemItem *new_mem_item = malloc(sizeof(MemItem));
	MALLOC_TEST(new_mem_item);

	if(memory_layout.tail) {
		memory_layout.tail->next_item = new_mem_item;
	}
	new_mem_item->mem_ptr = mem_ptr;
	new_mem_item->prev_item = memory_layout.tail;
	new_mem_item->next_item = NULL;
	new_mem_item->length = len;
	if(!memory_layout.head)
		memory_layout.head = new_mem_item;
	memory_layout.tail = new_mem_item;
}

static inline void mem_dealloc(MemItem *item) {
	free(item->mem_ptr);
	item->mem_ptr = NULL;
	item->length = 0;
}

void *mem_alloc(size_t len) {
	void *mem_ptr = (void *) malloc(len);
	MALLOC_TEST(mem_ptr);

	initMemItemAndAppend(mem_ptr, len);
	return mem_ptr;
}

void cleanAllMemory() {
	MemItem *curr = memory_layout.tail;
	MemItem *prev = NULL;
	while(curr) {
		prev = curr->prev_item;
		mem_dealloc(curr);
		free(curr);

		if(prev == NULL)
			break;

		curr = prev;
	}
}

void printAllMemoryItems() {
	MemItem *curr;
	for (curr = memory_layout.head; curr != NULL;
			curr = curr->next_item) {
		printf("%p\n", curr->mem_ptr);
	}
}

