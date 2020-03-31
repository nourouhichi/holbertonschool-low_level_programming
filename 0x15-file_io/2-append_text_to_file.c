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
 *append_text_to_file - adds text at the end of a file
 *@filename:the file name
 *@text_content:the text
 *Return:int
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, size, wr;
if (filename == NULL)
return (-1);
if (text_content == NULL)
return (1);
fd = open(filename, O_APPEND | O_WRONLY, 06000);
if (fd == -1)
return (-1);
size = length(text_content);
wr = write(fd, text_content, size);
if (wr != size)
return (-1);
close(fd);
return (1);
}
