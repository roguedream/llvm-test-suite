extern int printf(const char *str, ...);

int main() {
  int i = 0;
  for(i=0;i<100;i++){
    char title[] = "foo and stuff\n";
    printf("%s", title);
  }
  return 0;
}
