#include <stdio.h>
/**
 *main - Print out sizes of data types in C
 *Author: Kete Bismark Kwaku
 *Return: 0
 */
int main(void)
{
char p;
int q;
long int r;
long long int t;
float v;

printf("Size of a char: &lu byte(S)\n", (unsigned long)sizeof(p));
printf("Size of an int: &lu byte(S)\n", (unsigned long)sizeof(q));
printf("Size of a long int: &lu byte(S)\n", (unsigned long)sizeof(r));
printf("Size of a long long int: &lu byte(S)\n", (unsigned long)sizeof(t));
printf("Size of a float: &lu byte(S)\n", (unsigned long)sizeof(v));
return (0);
}
