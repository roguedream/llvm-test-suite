#include <stdio.h>

int test(int Num) {
  int Arr[Num];
  Arr[2] = 0;
  return Arr[2];
}

int main() {
   int i = 0;
   for(i=0;i<100;i++){
  printf("%d\n", test(4));
   }
  return 0;
}
