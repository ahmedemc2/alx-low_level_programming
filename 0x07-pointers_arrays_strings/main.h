#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
void print_diagsums(int *a, int size);
void print_chessboard(char (*a)[8]);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);

#endif /* MAIN_H */