#include "dog.h"
#include <stdlib.h>

/**
* new_dog - creates a new dog
*@name: name of the dog
*@age: age of the dog
*@owner: owner of the dog
*
* Return: struct dog. If fails, NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *s_dog;
	int i, lname, lowner;

	s_dog = malloc(sizeof(*s_dog));

	if (s_dog == NULL || !(name) || !(owner))
	{
		free(s_dog);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;
	for (lowner = 0; owner[lowner]; lowner++)
		;

	s_dog->name = malloc(lname + 1);
	s_dog->owner = malloc(lowner + 1);

	if (!(s_dog->name) || !(s_dog->owner))
	{
		free(s_dog->owner);
		free(s_dog->name);
		free(s_dog);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		s_dog->name[i] = name[i];
	s_dog->name[i] = '\0';

	s_dog->age = age;

	for (i = 0; i < lowner; i++)
		s_dog->owner[i] = owner[i];
	s_dog->owner[i] = '\0';

	return (s_dog);
}
