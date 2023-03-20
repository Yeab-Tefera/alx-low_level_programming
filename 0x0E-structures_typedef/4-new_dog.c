#include "dog.h"
#include <stdio.h>
int _strlen(char *l);
char *_strcpy(char *a, char *b);

/**
 * new_dog - Creates a new dog
 * @name: string name of the dog
 * @age: float age of the dog
 * @owner: char owner of the dog
 *
 * Return: pointer to struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	if (name == NULL)
		new_dog->name = NULL;
	else
	{
		new_dog->name = malloc(_strlen(name) + 1);
		if (new_dog->name == NULL)
		{
			free(new_d);
			return (NULL);
		}
		new_dog->name = _strcpy(new_dog->name, name);
	}
	if (owner == NULL)
		new_dog->owner = NULL;
	else
	{
		new_dog->owner = malloc(_strlen(owner) + 1);
		if (new_dog->owner == NULL)
		{
			free(new_dog->name);
			free(new_dog);
			return (NULL);
		}
		new_dog->owner = _strcpy(new_dog->owner, owner);
	}
	new_dog->age = age;
	return (new_dog);
}

/**
 * _strcpy- function copies string from b to a
 * @a: Pointer to destination of a string
 * @b: Pointer to source of string in which it copies from...
 *
 * Return: Pointer to destination
 */

char *_strcpy(char *a, char *b)
{
	char *c = a;
	
	while (*b)
		*c++ = *b++;
	*c = '\0';

	return (a);
}

/**
 * _strlen- function copies the length of a string
 * @s: ponter to string to get the length
 *
 * Return: Length of s
 */

int _strlen(char *s)
{
	int i = 0;
	
	while(s[i])
	{
		i++;
	}

	return (i);
}
