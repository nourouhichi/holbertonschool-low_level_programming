#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - cheks
 *@name: name
 *@f:function
 */
void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
return;
if (name == NULL)
name = "";
f(name);
}
