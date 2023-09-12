#include "main.h"
/**
  * _islower - Show 1 if the input is a
  * lowercase character. Another cases,
  *  shows 0
  * @c : the character in ACSII code
  *
  * Return: 1 for lowercase character. 0 for the rest
  */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
