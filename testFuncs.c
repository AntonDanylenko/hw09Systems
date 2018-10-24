#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
  printf("created file.txt, can write\n");
  int fd = open("file.txt", O_CREAT | O_WRONLY, 0700);
  
  char b[8];
  printf("fd number is %d\n", fd);
  
  printf("write wassup\n");
  write(fd, "wassup\n", 7);
  
  close(fd);
  printf("closed fd\n");
  
  printf("opened fd, can read\n");
  fd = open("file.txt", O_RDONLY);
  
  printf("reading\n");
  read(fd, b, 7);
  b[7] = "\0";
  
  printf("closed fd\n");
  close(fd);
  
  printf("should print wassup: %s\n", b);
}
