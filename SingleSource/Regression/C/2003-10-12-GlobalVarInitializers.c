#include <stdio.h>

union { unsigned __l; float __d; } GlobalUnion = { 0x70c00000U };

int main() {
   int iii = 0;
   for(iii=0;iii<100;iii++){
  union { unsigned __l; float __d; } LocalUnion = { 0x7fc00000U };

  printf("%f %f\n", GlobalUnion.__d, LocalUnion.__d);
   }
  return 0;
}



