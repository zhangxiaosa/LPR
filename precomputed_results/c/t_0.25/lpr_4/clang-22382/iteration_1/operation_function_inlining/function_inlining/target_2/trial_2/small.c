typedef unsigned d;
typedef unsigned e;

struct h {
  int i;
  long j;
  int k;
};

d l;

e fn2() {
  struct h p;
  int q;
  
  // Inlined body of fn1
w:
  goto w;
}

int main() {}
