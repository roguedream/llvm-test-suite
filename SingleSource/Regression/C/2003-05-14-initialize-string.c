extern int printf(const char *str, ...);

int main() {
  int iii = 0;
  for(iii=0;iii<100;iii++){
    char title[] = "foo and stuff\n";
    printf("%s", title);
  }
  return 0;
}
