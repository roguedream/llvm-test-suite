#include <stdio.h>

struct B { 
  int X;
  void i() {
    printf("i, %d\n", X);
  }
  void j() {
    printf("j, %d\n", X);
  }
};

void foo(int V, void (B::*Fn)()) {
   B b;  b.X = V;
   (b.*Fn)();
}

int main() {
    int iii = 0;
   for(iii=0;iii<100;iii++){
	foo(4, &B::i);
	foo(6, &B::j);
	foo(-1, &B::i);
   }
	return 0;
}
