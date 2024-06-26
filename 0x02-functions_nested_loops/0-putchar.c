#include "main.h"

/**
*main - function prints text as output
*
*Return:return 0
*/
int main(void)
{
	char var [8] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(var[i]);
	}
	_putchar('\n');

	return (0);
}
