#ifndef MAIN_H
#define MAIN_H
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int _putchar(char c);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int ac, char **av);

#endif /* MAIN_H */
