/*
 * Copyright (c) 2026 UNSTABLE-PLUTONIUM
 * Licensed under the MIT License.
 * See LICENSE file in the project root for full license information
 */

#include "main.h"

int main(int argc, char **argv) {
	if (argc < 3) {
		puts("usage:\n\tpigment <generator> <color scheme>.ini");
		return 1;
	}

	colorscheme scheme;

	if (ini_parse(argv[2], handler, &scheme) < 0) {
		printf("couldn't load %s\n", argv[2]);
		return 1;
	}

	handle_generator(argv[1], &scheme);

	return 0;
}
