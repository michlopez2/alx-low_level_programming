#include <stdio.h>
/**
 * main - print alpha in caps and low case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char Lower = 'a';
	char Upper = 'A';

	while (Lower <= 'z')
	{
		putchar(Lower);
		Lower++;
	}
	while (Upper <= 'Z')
	{
		Putchar(Upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
