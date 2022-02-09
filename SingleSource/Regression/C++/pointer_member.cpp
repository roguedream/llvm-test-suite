#include <stdio.h>

struct B { int i, j; };
struct D : public B {};
int D::*di = &D::i;
int D::*dj = &D::j;

int main() {
    int iii = 0;
   for(iii=0;iii<100;iii++){
  D d;
  d.i = d.j = 0;
  d.*di = 4;
  d.*dj = 7;

  printf("%d %d\n", d.i, d.j);
   }
  return 0;
}
