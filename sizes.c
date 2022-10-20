#include <stdio.h>

/**
  * main - Entry point
  * Print out the sizes of different intrinsic data types.
  *
  * Return: 0, success
  */

int main(void)
{
	int i;
	double d;
	char c;

	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a double is: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of char is: %lu.\n", (unsigned long)sizeof(c));

	return (0);
}
