#ifndef _DOG_H_
#define _DOG_H_

/**
* dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;


/**
* struct dog - define elements of my dog
*@name: name of dog
*@age: age of dog
*@owner: owner of dog
*
* Description: strcut called "dog" that stores its name, age, owner.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
