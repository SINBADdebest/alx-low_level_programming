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

prinf("size of char: %lu byte(s)\n", (unsigned long)sizeof(z));
prinf("size of int: %lu byte(s)\n", (unsigned long)sizeof(x));
prinf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(v));
prinf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
prinf("size of float: %lu byte(s)\n", (unsigned long)sizeof(n));
return (0);
}
