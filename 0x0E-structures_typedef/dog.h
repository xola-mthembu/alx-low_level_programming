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
typedef struct dog dog_t;
/* Prototypes for the functions */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
