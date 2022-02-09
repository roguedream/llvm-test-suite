#include <typeinfo>
#include <cstdio>

int main() {
    int iii = 0;
   for(iii=0;iii<100;iii++){
  printf("%d", typeid(int) == typeid(float));
   }
}
