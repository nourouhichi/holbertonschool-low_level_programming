#include "holberton.h"
/**
 *read_textfile - reads a text file
 *@filename: the file to read
 *@letters: number of letters
 *Return: wr
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buff;
ssize_t wr, rd, fd;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buff = malloc(letters);
if (buff == NULL)
{
close(fd);
return (0);
}
rd = read(fd, buff, letters);
if (rd == -1)
{
close(fd);
free(buff);
return (0);
}
wr = write(STDOUT_FILENO, buff, rd);
if (rd != wr || wr == -1)
{
close(fd);
free(buff);
return (0);
}
close(fd);
free(buff);
return (wr);
}
