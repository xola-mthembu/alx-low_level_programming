#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Struct for a dog's basic information
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the dog's owner
 */
struct dog
{
char *name;
float age;
char *owner;
};
/* Prototype for the init_dog function */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
