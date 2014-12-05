/*
 * memory_mgmt.c
 *
 *  Created on: 31.8.2014
 *      Author: Adam Lucansky <xlucan01@stud.fit.vutbr.cz>
 */

#include "memory_mgmt.h"

GenVectorFunctions(MemItem)

static MemItemVector *memory_layout = NULL;

/**
 * ALLOCATION
 */

static inline void initMemItemAndAppend(void* mem_ptr, size_t len) {
	if(memory_layout == NULL) {
		memory_layout = MemItemVectorInit(512);
	}

	MemItem item = { .mem_ptr = mem_ptr, .length = len };
	MemItemVectorAppend(memory_layout, item);
}

void *mem_alloc(size_t len) {
	void *mem_ptr = (void *) malloc(len);
	MALLOC_TEST(mem_ptr);

	initMemItemAndAppend(mem_ptr, len);
	return mem_ptr;
}

void mem_ptradd(void *ptr) {
	initMemItemAndAppend(ptr, 1);
}

/**
 * DEALLOCATION
 */

/**
 * Use only after cleaning memory. Use implodeMemory().
 */
static inline void destroyMemoryManagement() {
	if(memory_layout != NULL) {
		// Memory must be already cleaned
		MemItemVectorFree(memory_layout);
		memory_layout = NULL;
	}
}

void cleanAllMemory() {
	if(memory_layout == NULL)
		return;

	MemItem *current;

	while((current = MemItemVectorLast(memory_layout)) != NULL) {
		free(current->mem_ptr);
		MemItemVectorPop(memory_layout);
	}
}

void implodeMemory() {
	cleanAllMemory();
	destroyMemoryManagement();
}

/**
 * OTHER
 */

void printAllMemoryItems() {
	if(memory_layout == NULL)
		return;

	MemItem *current = MemItemVectorFirst(memory_layout);
	if(current == NULL)
		return;
	MemItem *last = MemItemVectorLast(memory_layout);
	for(; current <= last; current++) {
		printf("Pointer %p, len: %d\n", current->mem_ptr, current->length);
	}
}

