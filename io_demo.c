#include<stdio.h>

/**
  * main -Entry point
  * Demo use of printf and scanf  to read and output data.
  *
  * Return: 0, Success
  */

int main(void)
{
	char f, m, l;
	int age;

	printf("Enter your initials, followed by age: ");
	scanf("%c %c %c %d", &f, &m, &l, &age);
	printf("My initials are: %c%c%c and my age is %d.\n",
			f, m, l, age);

	return (0);
}
