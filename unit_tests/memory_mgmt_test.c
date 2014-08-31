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
	for(int i = 0; i < 10; i++) {
		mem_alloc(rand() % 10);
	}
	//printAllMemoryItems();

	printAllMemoryItems();
	cleanAllMemory();
}
