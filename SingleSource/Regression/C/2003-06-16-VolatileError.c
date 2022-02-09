/* This crashes the CFE.  */
extern int volatile test;
int volatile test = 0;

int main() {
   int iii = 0;
   for(iii=0;iii<100;iii++){ int c = 1;}return 0; }
