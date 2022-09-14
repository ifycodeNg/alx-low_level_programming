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
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longint));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongInt));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
