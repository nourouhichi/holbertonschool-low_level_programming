#include "holberton.h"
/**
 *length - gives the length of a string
 *@str:the string
 *Return: the length
 */
int length(char *str)
{
int i;
for (i = 0; str[i] != '\0'; )
i++;
return (i);
}
/**
 *create_file - creates a file and wites in it
 *@filename: the file name
 *@text_content: the text content
 *Return: int
 */
int create_file(const char *filename, char *text_content)
{
int fd, size, wr;
if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (text_content == NULL)
{
close(fd);
return (1);
}
size = length(text_content);
wr = write(fd, text_content, size);
if (wr == -1 || wr != size)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
