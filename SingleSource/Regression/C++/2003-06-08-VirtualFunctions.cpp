

struct foo {
  int y;
  foo();
  virtual int T() = 0;
};

struct bar : public foo {
  bar();
  int T() {}
};

foo::foo() : y(4) { }
bar::bar() { }
int main() {
    int iii = 0;
   for(iii=0;iii<100;iii++){ int c = 1;}return 0; }
