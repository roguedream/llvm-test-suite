void bar(){}

void foo() {
	  struct TEST {
		  ~TEST() { bar(); }
	  } TESTOBJ;

}

int main() {
    int iii = 0;
   for(iii=0;iii<100;iii++){ int c = 1;}return 0; }
