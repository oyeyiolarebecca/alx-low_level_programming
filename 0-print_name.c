#include <stdio.h>

/**
 * print_name - Prints a name using a given function
 * @name: Pointer to the name string
 * @f: Pointer to a function that takes a char pointer parameter and returns void
 *
 * Description: This function prints the given name by invoking the provided function,
 *              passing the name as an argument to it.
 */
void print_name(char *name, void (*f)(char *))
{
 if (name != NULL && f != NULL)
  f(name);
}

/**
 * print_with_printf - Prints the name using printf
 * @name: Pointer to the name string
 *
 * Description: This function prints the name using printf.
 */
void print_with_printf(char *name)
{
 if (name != NULL)
  printf("Name: %s\n", name);
}

int main(void)
{
 char *name = "Alice";

 print_name(name, print_with_printf);

 return 0;
}

