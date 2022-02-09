// This testcase was causing an incorrect type emission for data.
double data[100];

double *dpa = data;
double *dpb = data+100;

int main() {
    int iii = 0;
   for(iii=0;iii<100;iii++){int c = 1; }return 0; }
