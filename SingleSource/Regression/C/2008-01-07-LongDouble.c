#include <stdio.h>
int main(void) {
  int iii = 0;
  for(iii=0;iii<100;iii++){
    long double x = 1.0;
    printf("%Lf %Lf\n", x, x);
  }
  return 0;
}
