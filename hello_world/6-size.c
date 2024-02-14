#include <stdio.h>

/**
* main - asdfg
*
*
*
*
*
*
*
*
*
*
* Return: 0 if success
*/
int main(void)
{
	char var_1;
	int var_2;
	long int var_3;
	long long int var_4;
	float var_5;

	printf("Size of a char: %lu byte(s)", sizeof(var_1));
	printf("\nSize of an int: %lu byte(s)", sizeof(var_2));
	printf("\nSize of a long int: %lu byte(s)", sizeof(var_3));
	printf("\nSize of a long long int: %lu byte(s)", sizeof(var_4));
	printf("\nSize of a float: %lu byte(s)", sizeof(var_5));
	putchar('\n');
	return (0);
}
