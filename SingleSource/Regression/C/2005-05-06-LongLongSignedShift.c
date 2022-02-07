extern int printf(const char *str, ...);

int main(int argc, char **argv) {
  int i = 0;
  for(i=0;i<100;i++){
    printf("%lld\n", (argc-100LL) >> 38);
  }

  return 0;
}
