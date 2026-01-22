#! /bin/sh

# Copyright (c) 2026 UNSTABLE-PLUTONIUM
# Licensed under the MIT License.
# See LICENSE file in the project root for full license information

gcc -std=c99 -c -I third_party/inih third_party/inih/ini.c src/main.c src/handler.c src/handle_generator.c
gcc ini.o main.o handler.o handle_generator.o -o tint

rm ini.o main.o handler.o handle_generator.o
