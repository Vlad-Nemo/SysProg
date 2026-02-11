#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void save_message(const char *filename, const char *message) {
    int fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0644);
    write(fd, message, 7);
    close(fd);
}