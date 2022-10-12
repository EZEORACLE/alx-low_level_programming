#include "main.h"
/**
 *_strlen -The counting of array
 *@s: The array of elements
 *Return: 1
 */

int _strlen(char *s)
{
unsigned int i;

i = 0;
while (s[i] != '\0') /*count character of string*/
{
	i++;
}

return(i);
}

/**
 *_strcpy - The copy of arrays
 *@src: The arrays of elements
 *@dest: the dest of array
Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 *_strdup - The array for printing a string
 *@str: The array of elements
 *Return: The pointer
 */

char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

	if (str == 0)
	{
		return(NULL);
	}

	size - _strlen(str) + 1;

	dst = (char *) malloc(size *sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}

	_strcpy(dst, str);
	return (dst);
}


