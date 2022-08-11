#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct string_list - singly linked list
 * @str: string
 * @len: length of string
 * @next: pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct string_list
{
	char *str;
	unsigned int len;
	struct string_list *next;
} list_t;

size_t print_list(const list_t *h);

#endif
