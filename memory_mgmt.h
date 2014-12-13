/*
 * Project name:
 * Implementace interpretu imperativního jazyka IFJ14
 *
 * Repository:
 * https://github.com/Dasio/IFJ
 *
 * Team:
 * Dávid Mikúš			(xmikus15)
 * Peter Hostačný		(xhosta03)
 * Tomáš Kello			(xkello00)
 * Adam Lučanský		(xlucan01)
 * Michaela Lukášova	(xlukas09)
 */

#include "system.h"
#include "vector.h"
#include "stack.h"
#include "instruction.h"

#include "initializer.h"

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

/**
 * Implodes memory and exit according to return code.
 */
void die();

/*
 * Prints pointers to all allocated blocks
 */
void printAllMemoryItems();

#endif /* MEMORY_MGMT_H_ */
