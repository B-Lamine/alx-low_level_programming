#ifndef FIO
#define FIO
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFSIZE 1024
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
#endif /* #ifndef FIO */
