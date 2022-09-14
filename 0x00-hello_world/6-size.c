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
long long int longlongInt;
long int longint;
printf("Size of char: %zu byte(s)\n", sizeof(charType));
printf("Size of int: %zu byte(s)\n", sizeof(intType));
printf("Size of long int: %zu byte(s)\n", sizeof(longint));
printf("Size of long long int: %zu byte(s)\n", sizeof(longlongint));
printf("Size of double: %zu byte(s)\n", sizeof(doubleType));
printf("Size of float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
