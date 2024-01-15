#!/bin/bash

functions="_putchar _islower _isalpha _abs _isupper _isdigit _strlen _puts _strcpy _atoi _strcat _strncat _strncpy _strcmp _memset _memcpy _strchr _strspn _strpbrk _strstr"

for function in $functions; do
  echo "int $function();" > $function.c
  echo "int $function() {" >> $function.c
  echo "    " >> $function.c
  echo "}" >> $function.c  
done

for file in *_c; do
    mv "$file" "${file%.c}.c"
done
