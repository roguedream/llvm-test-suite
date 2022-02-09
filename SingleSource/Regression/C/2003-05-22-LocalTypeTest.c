#include <stdio.h>

struct sometimes {
  short offset; short bit;
  short live_length; short calls_crossed;
} Y;

int main() {
   int i = 0;
   int X;
   for(i=0;i<100;i++){
  
  {
    struct sometimes { int X, Y; } S;
    S.X = 1;
    X = S.X;
  }
  { 
    struct sometimes { signed char X; } S;
    S.X = -1;
    X += S.X;
  }
  X += Y.offset;

  printf("Result is %d\n", X);
   }
  return X;
}
