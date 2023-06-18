#include <stdio.h>

/**
 *main - Program that prints various sizes
 *
 *Return: 0 (Succes)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int k;
	float f;

printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)izeof(l));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(k));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
