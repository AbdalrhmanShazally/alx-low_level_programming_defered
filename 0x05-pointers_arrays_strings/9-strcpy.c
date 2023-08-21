#include "main.h"

/**
* _strcpy - Copies a string from source to destination.
* copies the string pointed to by src.
* @dest: copy to string
* @src: string copying from
* Return: String
*/

char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';

	return (original_dest);
}
