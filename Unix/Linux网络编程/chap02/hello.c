/* hello.c */
#include <stdio.h>

// 可执行文件 gcc -o hello.exe hello.c
// 目标文件 gcc -c -o hello.o hello.c
// 预处理之后的文件: gcc -E hello.c
// 汇编语言: gcc -S hello.c
int main(void){
  printf("Hello World!\n");
  return 0;
}
