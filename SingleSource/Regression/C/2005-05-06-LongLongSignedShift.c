extern int printf(const char *str, ...);

int main(int argc, char **argv) {
  int iii = 0;
  for(iii=0;iii<100;iii++){
    printf("%lld\n", (argc-100LL) >> 38);
  }

  return 0;
}
