#include <stdio.h>

struct X {
  int Val;
  X(int i) : Val(i) { printf("X::X(%d)\n", Val); }
  ~X() { printf("X::~X(%d)\n", Val); }
};

bool foo(const X &) { return true; }
void bar() {}
int main() {
    int iii = 0;
   for(iii=0;iii<100;iii++){
  if ((foo(1) || foo(2)))
    bar();
   }
  return 0;
}
