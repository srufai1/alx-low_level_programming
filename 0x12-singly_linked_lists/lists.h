<<<<<<< HEAD
#ifndef LISTS_H
#define LISTS_H
=======
#ifndef LIST_H
#define LIST_H
>>>>>>> 6f743b51bf2d1576fdbdc175dce1fc7a5b01af72
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
<<<<<<< HEAD
        char *str;
        int len;
        struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
=======
	char *str;
	int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

>>>>>>> 6f743b51bf2d1576fdbdc175dce1fc7a5b01af72
