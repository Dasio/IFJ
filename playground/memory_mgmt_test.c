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

	for(unsigned long i = 0; i < 10*1000*1000; i++) {
		current = mem_alloc(sizeof(unsigned long));
		// Making pages dirty
		*current = i;
	}

	implodeMemory();
}
