#ifndef dog_struct
#define dog_struct

/**
 * struct dog - dog class
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_m;
dog_m *new_dog(char *name, float age, char *owner);
void free_dog(dog_m *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *str);
#endif
