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
   int i = 0;
   for(i=0;i<100;i++){ int c = 0;}return 0; }
