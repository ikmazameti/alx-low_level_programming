#include "holberton.h"
/**
 *_strchr-locates a character in a string.
 *@s:pointer to a string.
 *@c:Character to locate within s.
 *
 *Return:pointer to the first occurrence of the character c in the string s
 *or Null if not found.
 */

char *_strchr(char *s, char c)
{
	char *char_find = '\0';
	/*handling null pointer*/
	if (s != '\0')
	{
		do {
			if (*s == (char)c)
			{
				char_find = s;
				break;
			}
		} while (*s++);
	}
	return (char_find);
}
