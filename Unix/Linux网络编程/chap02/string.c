/* string.c */
#define ENDSTRING '\0'

// 动态链接 gcc -shared -Wl,-soname,libstr.so -fPIC -o libstr.so.1 string.c
// -fPIC 于位置无关
// ar -rcs libstr.a string.o 生成静态的库
int StrLen(char *string) {
  int len = 0;
  while(*string++ != ENDSTRING) {
    len++;
  }
  return len;
}
