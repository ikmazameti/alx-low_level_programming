#include "holberton.h"
/**
 *_strspn-Get the length of a prefix substring.
 *@s:The null-terminated string to be scanned
 *@accept:The null-terminated string containing the characters to match.
 *
 *Return:Returns the number of bytes in the initial segment
 *of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	/*return 0 if any one is NULLS*/
	if ((s == '\0') || (accept == '\0'))
		return (len);
	/*return s char position if found in accept*/
	/*if not found return NULL*/
	while (*s && _strchr(accept, *s++))
	{
		len++;
	}
	return (len);
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
