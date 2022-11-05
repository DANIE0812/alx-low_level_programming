#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character to search
 * Return: Pointer to the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0') /*WHILE string is not equal to null character(\0)*/
	{
		if (*s == c) /*if string is equal to charcter*/
		{
			return (s); /*return string*/
		}
		++s;
	}
	if (*s == c)/*if string is equal to character*/
	{
		return (s);
	}
	return (0);/* values null*/
}
