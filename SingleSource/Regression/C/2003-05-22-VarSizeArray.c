#include <stdio.h>

int test(int Num) {
  int Arr[Num];
  Arr[2] = 0;
  return Arr[2];
}

int main() {
   int iii = 0;
   for(iii=0;iii<100;iii++){
  printf("%d\n", test(4));
   }
  return 0;
}
