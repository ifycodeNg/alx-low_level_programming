#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ++ch)
{
if (ch == 'p')
	continue;

if (ch == 'e')
	continue;

putchar(ch);
}
putchar(10);
return (0);
}

