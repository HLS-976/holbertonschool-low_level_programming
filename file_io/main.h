#ifndef MAIN_H
#define MAIN_H
/*libraries*/
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/*prototype*/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
nt append_text_to_file(const char *filename, char *text_content);
#endif
