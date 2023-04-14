#ifndef FIO
#define FIO
#include <stddef.h>
#include <unistd.h>
#define BUFSIZE 1024
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error(char *filename, int exit_n);
void close_error(int fd);
#endif /* #ifndef FIO */
