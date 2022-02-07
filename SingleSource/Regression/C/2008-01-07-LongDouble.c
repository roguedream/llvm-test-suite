#include <stdio.h>
int main(void) {
  int i = 0;
  for(i=0;i<100;i++){
    long double x = 1.0;
    printf("%Lf %Lf\n", x, x);
  }
  return 0;
}
