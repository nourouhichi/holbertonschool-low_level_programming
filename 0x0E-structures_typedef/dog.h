#ifndef REX
#define REX
/**
 *struct dog - cheks
 *@name: a dof name
 *@age: a dog age
 *@owner: a dog owner
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
#endif
