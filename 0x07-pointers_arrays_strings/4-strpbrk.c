#include "main.h"
/**
 *_strpbrk- searches a string for any of a set of bytes.
 *@s:The null-terminated string to be scanned
 *@accept:he null-terminated string containing the characters to match.
 *
 *Return:Returns a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = start;
		s++;
	}
	return (NULL);
}
