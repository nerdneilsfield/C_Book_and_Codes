/* loadDynamic.c */
#include <dlfcn.h>
#include <stdio.h>

// gcc -o loadDynamic.exe loadDynamic.c libstr.so.1 -ldl
int main(void) {
  char src[] = "Hello Dynamic";
  int (*pStrLenFun)(char *str);
  void *phandle = NULL;
  char *perr = NULL;

  // open the .so
  phandle = dlopen("./libstr.so.1", RTLD_LAZY);

  if (!phandle) {
    printf("Failed to load library!");
  }
  perr = dlerror();
  if (perr != NULL) {
    printf("%s\n", perr);
    return 0;
  }

  pStrLenFun = dlsym(phandle, "StrLen");
  perr = dlerror();
  if (perr != NULL) {
    printf("%s\n", perr);
  }

  printf("The string length is %d\n", pStrLenFun(src));

  dlclose(phandle);
  return 0;
  }
