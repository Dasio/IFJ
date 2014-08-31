/* Automatic memory management
 * memory_mgmt.h
 *
 *  Created on: 31.8.2014
 *      Author: Adam Lucansky <xlucan01@stud.fit.vutbr.cz>
 */

#ifndef MEMORY_MGMT_H_
#define MEMORY_MGMT_H_

struct mem_item;
typedef struct mem_item MemItem;

struct mem_item {
	void* mem_ptr;
	uint32_t length;
	MemItem* prev_item;
	MemItem* next_item;
};

typedef struct {
	MemItem *head;
	MemItem *tail;
} MemList;

/*
 * Replacement function for regular malloc(),
 * registers all allocations in linked list
 * for later complete free'ing
 */
void *mem_alloc(size_t len);

/*
 * Free's all allocated memory blocks
 */
void cleanAllMemory();

/*
 * Prints pointers to all allocated blocks
 */
void printAllMemoryItems();

#endif /* MEMORY_MGMT_H_ */
