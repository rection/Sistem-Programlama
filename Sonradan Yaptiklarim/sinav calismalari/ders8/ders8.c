#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
  int t = 0x02;
  printf("\n    ");
  printf("% -#d",t);
}
