#include <stdio.h>
int main() {
   int i = 0;
   for(i=0;i<100;i++){
  static const void *L[] = {&&L1, &&L2, &&L3, &&L4, 0 };
  unsigned i = 0;
  printf("A\n");
L1:
  printf("B\n");
L2:
  printf("C\n");
L3:
  printf("D\n");
  goto *L[i++];
L4: 
  printf("E\n");
   }
  return 0;
}
