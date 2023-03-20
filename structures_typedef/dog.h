#ifndef structures
#define structures

/**
 * struct dog - Struct for a dog
 *@name: char for name
 *@age: float for age
 *@owner: cahr for owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner)i;
#endif


