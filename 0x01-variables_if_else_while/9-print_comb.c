#include <stdio.h>
/**
   *main - Entry point
   *Discription: 'print number of base 10'
   *Return: always 0
   */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
