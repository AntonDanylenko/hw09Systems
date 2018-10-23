#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
  int fd = open("file.txt", O_RDWR);
  printf("%d\n", fd);
  //ssize_t read(int fd, void *buf, size_t count);
  int *file_content[100];
  read(fd, file_content,16);
  printf("file_content: %ls\n", file_content[0]);
}
