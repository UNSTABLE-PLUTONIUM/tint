#! /bin/bash

# Copyright (c) 2026 UNSTABLE-PLUTONIUM
# Licensed under the MIT License
# See LICENSE file in the project root for full information

cc -std=c99 -I third_party/inih -c third_party/inih/ini.c
cc -std=c99 -I third_party/inih -c src/tint.c
cc -std=c99 -I third_party/inih -c src/handler.c
cc -std=c99 -I third_party/inih -c src/handle_generator.c

cc ini.o tint.o handler.o handle_generator.o -o tint

rm ini.o tint.o handler.o handle_generator.o
