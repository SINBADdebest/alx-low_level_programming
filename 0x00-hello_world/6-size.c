#include <stdio.h>
/**
 * main - printing the size of various types
 * return (0)
 */

int main(void)
{
	char z;
	int x;
	long int v;
	long long int b;
	float n;

printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(v));
printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(n));
return (0);
}
