#include <stdio.h>
#include <stddef.h>
/**
 * _memset - fills the first n bytes of the memory area
 *           pointed to by @s with the constant byte @c
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 * description _memset: over there
 *
 * Return: A pointer to be filled memory area @s.
 *
 */
Void *_memset(void *s, int c, size_t n)
{
	Unsigned int index;
	Unsigned char *memory = s, value = c;

	For (index = 0; index < n; index++)
			Memory[index] = value;

	Return (memory);
}
