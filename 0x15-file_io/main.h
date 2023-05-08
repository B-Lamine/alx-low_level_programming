#ifndef FIO
#define FIO
#include <stddef.h>
#include <unistd.h>
#define BUFSIZE 1024
ssize_t read_textfile(const char *filename, size_t letters);
#endif /* #ifndef FIO */
