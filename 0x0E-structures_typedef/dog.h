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
/* Define the new type dog_t as a new name for struct dog */
typedef struct dog dog_t;
/* Prototype for the init_dog function */
void init_dog(struct dog *d, char *name, float age, char *owner);
/* Prototype for the print_dog function */
void print_dog(struct dog *d);
/* Prototype for the new_dog function */
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */
