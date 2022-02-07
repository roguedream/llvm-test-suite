/* This crashes the CFE.  */
extern int volatile test;
int volatile test = 0;

int main() {
   int i = 0;
   for(i=0;i<100;i++){ int c = 1;}return 0; }
