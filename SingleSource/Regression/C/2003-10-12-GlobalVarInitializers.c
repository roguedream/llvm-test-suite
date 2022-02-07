#include <stdio.h>

union { unsigned __l; float __d; } GlobalUnion = { 0x70c00000U };

int main() {
   int i = 0;
   for(i=0;i<100;i++){
  union { unsigned __l; float __d; } LocalUnion = { 0x7fc00000U };

  printf("%f %f\n", GlobalUnion.__d, LocalUnion.__d);
   }
  return 0;
}



