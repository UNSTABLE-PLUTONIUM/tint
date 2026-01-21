/*
 * Copyright (c) 2026 UNSTABLE-PLUTONIUM
 * Licensed under the MIT License.
 * See LICENSE file in the project root for full license information
 */

#include "main.h"

int handler(void* user, const char* selection, const char* name, const char* value) {
	colorscheme* userptr = (colorscheme*)user;

	// this is how i do it, i guess
	if (strcmp(name, "foreground") == 0) {
		strncpy(userptr->foreground, value, sizeof(userptr->foreground));
	}

	MATCH("foreground"); SETVAL(userptr->foreground);
	MATCH("background"); SETVAL(userptr->background);
	MATCH("cursor_foreground"); SETVAL(userptr->cursor_foreground);
	MATCH("cursor_background"); SETVAL(userptr->cursor_background);
	MATCH("selection_foreground"); SETVAL(userptr->selection_foreground);
	MATCH("selection_background"); SETVAL(userptr->selection_background);
	MATCH("color0"); SETVAL(userptr->color0);
	MATCH("color1"); SETVAL(userptr->color1);
	MATCH("color2"); SETVAL(userptr->color2);
	MATCH("color3"); SETVAL(userptr->color3);
	MATCH("color4"); SETVAL(userptr->color4);
	MATCH("color5"); SETVAL(userptr->color5);
	MATCH("color6"); SETVAL(userptr->color6);
	MATCH("color7"); SETVAL(userptr->color7);
	MATCH("color8"); SETVAL(userptr->color8);
	MATCH("color9"); SETVAL(userptr->color9);
	MATCH("color10"); SETVAL(userptr->color10);
	MATCH("color11"); SETVAL(userptr->color11);
	MATCH("color12"); SETVAL(userptr->color12);
	MATCH("color13"); SETVAL(userptr->color13);
	MATCH("color14"); SETVAL(userptr->color14);
	MATCH("color15"); SETVAL(userptr->color15);

	return 1;
}
