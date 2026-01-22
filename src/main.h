/*
 * Copyright (c) 2026 UNSTABLE-PLUTONIUM
 * Licensed under the MIT License.
 * See LICENSE file in the project root for full license information
 */

#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include "ini.h"

// big @$$ struct, i know

typedef struct {
	char foreground[8];
	char background[8];
	char cursor[8];
	char selection_foreground[8];
	char selection_background[8];
	char color0[8];
	char color1[8];
	char color2[8];
	char color3[8];
	char color4[8];
	char color5[8];
	char color6[8];
	char color7[8];
	char color8[8];
	char color9[8];
	char color10[8];
	char color11[8];
	char color12[8];
	char color13[8];
	char color14[8];
	char color15[8];
} colorscheme; // is it supposed to be colorscheme or color scheme?

#define MATCH(s) if (strcmp(selection, s) == 0)
#define SETVAL(v) strncpy(v, value, sizeof(v))

extern void handle_generator(char *generator, colorscheme* scheme);

// i dont really like how inih makes me do this
extern int handler(void* user, const char* selection, const char* name, const char* value);

#endif
