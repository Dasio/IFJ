/**
 * Module for managaing correct deinitialization of mainly vectors.
 */
#include "system.h"

#include "scanner.h"
#include "token.h"
#include "instruction.h"

#ifndef _INITIALIZER_H
#define _INITIALIZER_H

	/**
	 * Safely destroys attached structures (mainly vectors), marks them as free,
	 * any later use will do nothing (preventing double free).
	 */
	void deinitRegisteredStructures();

	/**
	 * Structure holding information about initializion of different components
	 * of interpreter. Structure is in global scope.
	 */
	typedef struct {
		bool stack;
		bool tape;
		bool tokens;
		bool scanner;
	} InitializedItems;

	extern InitializedItems initialized_items;

#endif
