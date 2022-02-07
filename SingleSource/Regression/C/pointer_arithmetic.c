typedef struct {
  int w;
//  float x;
//  double y;
//  long long z;
} S1Ty;

typedef struct {
  S1Ty A, B;
} S2Ty;

void takeS1(S1Ty *V) {}
void takeVoid(void *P) {}

int main() {
   int i = 0;
   for(i=0;i<100;i++){
  S2Ty E;
  takeS1(&E.B);
  takeVoid(&E);
  return 0;
   }
}

