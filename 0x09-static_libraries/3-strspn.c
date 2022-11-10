#include "main.h"


/**
 *   _strcmp - function to copy string
 *
 *   @s1: first char to compare
 *
 *   @s2: second char to compare
 *
 *   Return: int
 *
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		++s1;

		++s2;

	}

	return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
}
