#ifndef LISTS_H
#define LISTS_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s -singly linked list
 * @n: integer
 * @next: points to the next node
 * Description: singly linked list node structure for this project
 */
typedef struct list_s
{
 char *str;
 int len;
 struct list_s *next;
} list_t;

size_t print_list(const list_t *h);