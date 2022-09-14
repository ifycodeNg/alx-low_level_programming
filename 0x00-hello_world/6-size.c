#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;
printf("Size of char: %zu byte(s)\n", sizeof(charType));
printf("Size of int: %zu byte(s)\n", sizeof(intType));
printf("Size of double: %zu byte(s)\n", sizeof(doubleType));
printf("Size of float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
