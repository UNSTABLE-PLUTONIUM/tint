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

	else if MATCH("background") SETVAL(userptr->background);
	else if MATCH("cursor") SETVAL(userptr->cursor);
	else if MATCH("selection_foreground") SETVAL(userptr->selection_foreground);
	else if MATCH("selection_background") SETVAL(userptr->selection_background);
	else if MATCH("color0") SETVAL(userptr->color0);
	else if MATCH("color1") SETVAL(userptr->color1);
	else if MATCH("color2") SETVAL(userptr->color2);
	else if MATCH("color3") SETVAL(userptr->color3);
	else if MATCH("color4") SETVAL(userptr->color4);
	else if MATCH("color5") SETVAL(userptr->color5);
	else if MATCH("color6") SETVAL(userptr->color6);
	else if MATCH("color7") SETVAL(userptr->color7);
	else if MATCH("color8") SETVAL(userptr->color8);
	else if MATCH("color9") SETVAL(userptr->color9);
	else if MATCH("color10") SETVAL(userptr->color10);
	else if MATCH("color11") SETVAL(userptr->color11);
	else if MATCH("color12") SETVAL(userptr->color12);
	else if MATCH("color13") SETVAL(userptr->color13);
	else if MATCH("color14") SETVAL(userptr->color14);
	else if MATCH("color15") SETVAL(userptr->color15);

	return 1;
}
