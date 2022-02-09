

struct foo {
  int y;
  foo();
};

struct bar : public foo {
  //int x;
  bar();
};

bar::bar() { }
foo::foo() { }

int main() {
    int iii = 0;
   for(iii=0;iii<100;iii++){ int c = 1;}return 0; }
