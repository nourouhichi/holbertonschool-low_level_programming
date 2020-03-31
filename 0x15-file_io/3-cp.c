#include "holberton.h"
/**
 *main - copies the content of a file to another
 *@argc:args number
 *@argv:args
 *Return:int
 */
int main(int argc, char *argv[])
{
int fd1, fd2, rd, wr;
char buff[1024];
if (argc != 3)
{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97); }
fd1 = open(argv[1], O_RDONLY);
if (fd1 == -1)
{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98); }
fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd1 == -1)
{dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
exit(99); }
while ((rd = read(fd1, buff, 1024)) != 0)
{
if (rd == -1)
{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98); }
wr = write(fd2, buff, rd);
if (wr == -1)
{dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
exit(99); }
}
if (close(fd1) == -1)
{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
exit(100); }
if (close(fd2) == -1)
{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
exit(100); }
return (0);
}
