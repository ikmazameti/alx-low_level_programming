#include "main.h"
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
