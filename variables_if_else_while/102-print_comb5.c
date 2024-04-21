#include <stdlib.h>
#include <stdio.h>

/**
* lfun - description
* @i: asdfg
* @j: asdfg
* @k: asdfg
* @lf: asdfg
*
* Description: This is a longer description.
*/
void lfun(int *i, int *j, int *k, int *lf)
{
	int l;

	for (l = *lf; l <= 57; l++)
	{
		putchar(*i);
		putchar(*j);
		putchar(' ');
		putchar(*k);
		putchar(l);
		if (*i == 57 && *j == 56)
			break;
		putchar(',');
		putchar(' ');
	}
	*lf = 48;
}

/**
* kfun - description
* @i: asdfg
* @j: asdfg
*
* Description: This is a longer description.
*/
void kfun(int *i, int *j)
{
	int k;
	int kf;
	int lf;

	kf = *i;
	lf = *j + 1;

	if (lf > 57)
	{
		kf = kf + 1;
		lf = 48;
	}
	for (k = kf; k <= 57; k++)
		lfun(i, j, &k, &lf);
}

/**
* jfun - description
* @i: asdfg
*
* Description: This is a longer description.
*/
void jfun(int *i)
{
	int j;

	for (j = 48; j <= 57; j++)
	{
		if (*i == 57 && j == 57)
			break;
		kfun(i, &j);
	}
}

/**
* ifun - description
*
* Description: This is a longer description.
*/
void ifun(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		jfun(&i);
}

/**
* main - description
*
* Return: description
*/
int main(void)
{
	ifun();

	putchar('\n');

	return (0);
}
