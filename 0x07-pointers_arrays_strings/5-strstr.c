#include <stdio.h>
#include "holberton.h"
/**
 **_strstr -main entry.
 *@haystack:char pointer
 *@needle: char variable
 *Description: func finds first occurrence of substring needle in string hay
 * Return:char pointer
 **/
char *_strstr(char *haystack, char *needle)
{
	int test = 0, i = 0, j, x;

	if (!(*needle) || !(*haystack))
		return (NULL);
	while (haystack[i] != '\0')
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			test = 0;
			x = i;
			if (needle[j] == haystack[x])
				test = 1;
			x++;
		}
		if (test == 1)
			return (needle);
		i++;
	}
	return (NULL);
}
