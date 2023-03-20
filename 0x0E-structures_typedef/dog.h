#ifndef dog_h
#define dog_h

/**
 * struct dog- dog attributes
 * @name: string name of the dog
 * @age: float age of the dog
 * @owner: char owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
