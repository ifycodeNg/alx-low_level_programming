#include<stdio.h>
int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;
printf("Size of char: %zu bytes\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of double: %zu bytes\n", sizeof(doubleType));
printf("Size of float: %zu byte\n", sizeof(floatType));
return (0);
}
