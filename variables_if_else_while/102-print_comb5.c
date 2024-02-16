#include <stdlib.h>
#include <stdio.h>

/**
* lfun - description
* @i: asdfg
* @j: asdfg
* @k: asdfg
* @lt: asdfg
* @kf: asdfg
* @lf: asdfg
*
* Description: This is a longer description.
*/
void lfun(int *i, int *j, int *k, int *lt, int *kf, int *lf)
{
	int l;

	for (l = *lt; l <= 57; l++)
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
	*lt = 48;
}

/**
* kfun - description
* @i: asdfg
* @j: asdfg
* @kf: asdfg
* @lf: asdfg
*
* Description: This is a longer description.
*/
void kfun(int *i, int *j, int *kf, int *lf)
{
	int k;
	int lt;

	lt = *lf;
	if (*lf == 57)
	{
		if (*kf != 57)
			*kf++;
		*lf = 48;
	}
	else
	{
		*lf++;
	}
	if (*i == 57 && *j == 57)
		*kf = 100;
	for (k = *kf; k <= 57; k++)
		lfun(i, j, &k, &lt, kf, lf);
}

/**
* jfun - description
* @i: asdfg
* @kf: asdfg
* @lf: asdfg
*
* Description: This is a longer description.
*/
void jfun(int *i, int *kf, int *lf)
{
	int j;

	for (j = 48; j <= 57; j++)
	{
		kfun(i, &j, kf, lf);
	}
}

/**
* ifun - description
* @kf: asdfg
* @lf: asdfg
*
* Description: This is a longer description.
*/
void ifun(int *kf, int *lf)
{
	int i;

	for (i = 48; i < 57; i++)
		jfun(&i, kf, lf);
}

/**
* main - description
*
* Return: description
*/
int main(void)
{
	int kf;
	int lf;

	kf = 48;
	lf = 49;

	ifun(&kf, &lf);

	putchar('\n');

	return (0);
}
