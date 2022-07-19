#include "holberton.h"
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
	/*return null if any one is NULL*/
	if ((s == '\0') || (accept == '\0'))
		return ('\0');
	while (*s)
	{
		if (_strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return ('\0');
}

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
