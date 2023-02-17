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

printf("Size of char: &lu byte(S)\n", (unsigned long)sizeof(p));
printf("Size of int: &lu byte(S)\n", (unsigned long)sizeof(q));
printf("Size of long int: &lu byte(S)\n", (unsigned long)sizeof(r));
printf("Size of long long int: &lu byte(S)\n", (unsigned long)sizeof(t));
printf("Size of float: &lu byte(S)\n", (unsigned long)sizeof(v));
return (0);
}
