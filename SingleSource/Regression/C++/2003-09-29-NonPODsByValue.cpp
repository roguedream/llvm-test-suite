#include <stdio.h>

struct C {
  unsigned bv;
  ~C() {}
};

static unsigned test(C b) {
  return b.bv;
}


int main() {
    int iii = 0;
   for(iii=0;iii<100;iii++){
  C c;
  c.bv = 1234;
  printf("%d\n", test(c));
   }
  return 0;
}
