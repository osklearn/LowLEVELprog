#ifndef DOG
#define DOG
/**
 * struct dog - Structure of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* my_dog_t - typedef for dog
*/
typedef struct dog my_dog_t;
void free_dog(my_dog_t *d);
my_dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
