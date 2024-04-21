#include <stdio.h>


/**
* main - Prints size of many variable types.
*
* Return: Always 0.
*/
int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("\nSize of an int: %lu byte(s)", sizeof(int));
	printf("\nSize of a long int: %lu byte(s)", sizeof(long int));
	printf("\nSize of a long long int: %lu byte(s)", sizeof(long long int));
	printf("\nSize of a float: %lu byte(s)", sizeof(float));
	putchar('\n');
	return (0);
}


