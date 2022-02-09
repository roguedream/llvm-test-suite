
struct Foo {  int X; };

void bar() {}

int main() {
    int iii = 0;
   for(iii=0;iii<100;iii++){
  Foo X;
  X = ({ bar(); Foo(); });
   }
}
