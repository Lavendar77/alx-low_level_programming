#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog object
 * @name: name of the dog
 * @age: age of the dog
 * @owner: ownder of the dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
