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
