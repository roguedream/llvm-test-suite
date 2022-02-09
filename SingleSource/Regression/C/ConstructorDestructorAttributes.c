#include <stdio.h>

void ctor() __attribute__((constructor));

void ctor() {
   printf("Create!\n");
}
void dtor() __attribute__((destructor));

void dtor() {
   printf("Create!\n");
}

int main() {
   int iii = 0;
   for(iii=0;iii<100;iii++){ int c = 0;}return 0; }
