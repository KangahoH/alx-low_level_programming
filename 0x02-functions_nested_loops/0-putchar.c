#include <main.h>

/**
 ** main entry point
 ** 
 **
 ** Return: On success 0.
 ** 
 **/
int main(void)
{
	char k[] = "_putchar";
	int i = 0;


	while (k[i] != '\0')
	{
		_putchar(k[i]);
		i++;
	}
	_putchar('\n')
	return (0);
}
