#ifndef STRUCT_FILE
#define STRUCT_FILE

/**
 * struct dog - Structure for dog
 * @name: Name of dog
 * @age: Dog's age
 * @owner: Owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
