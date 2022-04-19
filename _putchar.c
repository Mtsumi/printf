#include<stdio.h>
#include<unistd.h>
/**
 * _putchar-writes the character s to stdout
 * @s:The character to print
 * Return:On success 1.
 * on error,-1 is returned,and error is set appropriately.
 */
int _putchar(char s)
{
	return (write(1, &s, 1));

}
