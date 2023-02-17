#include <stdio.h>
/**
 *main - Print out sizes of data types in C
 *Author: Kete Bismark Kwaku
 *Return: 0
 */
int main(void)
{
int charSize = sizeof(char);
int intSize = sizeof(int);
int lonSize = sizeof(long int);
int longlongSize = sizeof(long long int);
int floatSize = sizeof(float);

printf("Size of a char: &d byte(S)\n", charSize);
printf("Size of an int: &d byte(S)\n", intSize);
printf("Size of a long int: &d byte(S)\n", longSize);
printf("Size of a long long int: &d byte(S)\n",longlongSize);
printf("Size of a float: &d byte(S)\n", floatSize);
return (0);
}
