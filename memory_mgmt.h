/* Automatic memory management
 * memory_mgmt.h
 *
 *  Created on: 31.8.2014
 *      Author: Adam Lucansky <xlucan01@stud.fit.vutbr.cz>
 */

#include "system.h"
#include "vector.h"

#ifndef MEMORY_MGMT_H
#define MEMORY_MGMT_H

/**
 * Structure used for single allocation,
 * stacked in MemItemVector (memory_layout)
 */
typedef struct {
	void* mem_ptr;    // Pointer itself
	uint16_t length;  // Length of allocated space
} MemItem;

GenVectorPrototypes(MemItem)

/*
 * Replacement function for regular malloc(),
 * registers all allocations in linked list
 * for later complete free'ing
 */
void *mem_alloc(size_t len);

/**
 * Appends pointer to memitem Vector.
 * @param ptr Any pointer
 */
void mem_ptradd(void *ptr);

/*
 * Free's all allocated memory blocks
 */
void cleanAllMemory();

/**
 * Cleans all pointers and deallocates memory management.
 * Use right before returning from main, otherwise exit() must proceed after.
 * Use with caution ^_^
 */
void implodeMemory();

/*
 * Prints pointers to all allocated blocks
 */
void printAllMemoryItems();

#endif /* MEMORY_MGMT_H_ */
