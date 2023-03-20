#ifndef dog_h
#define dog_h

/**
 * struct dog- dog attributes
 * @name: string name of the dog
 * @age: float age of the dog
 * @owner: char owner of the dog
 *
 * Desciption: new type that contains dog name, age, and owner.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
