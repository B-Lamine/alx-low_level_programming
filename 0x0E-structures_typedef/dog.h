#ifndef DOG
#define DOG

/**
  * struct dog - defines a dog's name, age and owner's name.
  * @name: dog's name,
  * @age: dog's age,
  * @owner: dog owner's name.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* #ifndef DOG */
