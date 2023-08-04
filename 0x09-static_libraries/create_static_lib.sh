#!/bin/bash
# Compile all the .c files in the current directory into object files
gcc -Wall -Werror -Wextra -pedantic -c *.c
# Create the static library liball.a from the generated object files
ar rcs liball.a *.o
# Clean up by removing the object files
rm -f *.o
