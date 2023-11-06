#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: First member - The name of the dog.
 * @age: Second member - The age of the dog.
 * @owner: Third member - The owner's name of the dog.
 *
 * Description: Structure of the name, age and owner of a dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
* dog_t - typedef for struct dog
*/
typedef struct dog dog_t;

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

