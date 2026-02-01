/*
 * Copyright (c) 2026 UNSTABLE-PLUTONIUM
 * Licensed under the MIT License.
 * See LICENSE file in the project root for full license information
 */

#include "main.h"

void handle_generator(char *generator, colorscheme* scheme) {
	char *args[] = {
		generator,
		scheme->foreground,
		scheme->background,
		scheme->cursor,
		scheme->selection_foreground,
		scheme->selection_background,
		scheme->color0,
		scheme->color1,
		scheme->color2,
		scheme->color3,
		scheme->color4,
		scheme->color5,
		scheme->color6,
		scheme->color7,
		scheme->color8,
		scheme->color9,
		scheme->color10,
		scheme->color11,
		scheme->color12,
		scheme->color13,
		scheme->color14,
		scheme->color15,
		NULL
	};

	pid_t pid = fork();

	if (pid < 0) {
		perror("Failed To Fork PID");
		exit(1);
	}

	if (pid == 0) {
		execv(args[0], args);

		perror("Failed To Run Generator");
		exit(1);
	}

	else {
		wait(NULL);
	}
}
