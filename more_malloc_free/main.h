#ifndef MAIN_H
#define MAIN_H

int _strlen(char *s);
char *checkarg(char *s);
char *_mul(char *s1, char *s2);
int main(int argc, char *argv[]);
void *_calloc(unsigned int nmb, unsigned int size);
char *makesecond(char *src, int l1, char c, int zero);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
int *array_range(int min, int max);
void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
