#include <stdio.h>

/**
 *main - Program that prints various sizes
 *
 *Return: 0 (Succes)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu bytes(s)\n", sizeof(a));
printf("Size of an int: %lu bytes(s)\n", sizeof(b));
printf("Size of a long int: %lu bytes(s)\n", sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
printf("Size of a float: %lu byte(s)\n", sizeof(f));
return (0);
}
