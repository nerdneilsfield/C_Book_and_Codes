/*main.c*/
#include <stdio.h>
extern int StrLen(char* str);
int main(void){
  char str[] = "Hello Dynamic";
  printf("string length is %d\n", StrLen(str));
  return 0;
}
