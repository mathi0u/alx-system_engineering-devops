#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase, followed by a new line
 * Return: 0 when succed
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
