/*
 * memory_mgmt_test.c
 *
 *  Created on: 31.8.2014
 *      Author: adam
 */

#include "../system.h"
#include "../memory_mgmt.h"

int main() {
	printAllMemoryItems();
	unsigned long *current;

	for(unsigned long i = 0; i < 1000*1000; i++) {
		current = mem_alloc(sizeof(unsigned long));
		// Making pages dirty
		*current = i;
	}

	mem_ptradd(malloc(5096));
	mem_ptradd(malloc(9999));

	implodeMemory();
}
