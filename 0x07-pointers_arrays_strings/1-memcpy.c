#include "holberton.h"
/**
 *_memcpy-copies memory area.
 *@dest:destination memory area.
 *@src:source memory area.
 *@n:size to copy.
 *
 *Return:pointer to destination memory area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = (char *)dest;
	const char *psrc = (const char *)src;

	/*const char *pszSource =( const char*)src;*/
	if ((pdest != '\0') && (psrc != '\0'))
	{
		while (n)
		{
			/*Copy byte by byte*/
			*(pdest++) = *(psrc++);
			--n;
		}
	}
	return (dest);
}
