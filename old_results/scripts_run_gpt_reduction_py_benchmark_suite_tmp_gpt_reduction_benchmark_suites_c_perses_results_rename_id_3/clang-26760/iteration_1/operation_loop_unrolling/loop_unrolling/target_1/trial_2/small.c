unsigned f;
int g;
short fn1() {
  int i;
  int j = 0x24F96B7BL;
  unsigned k;
  
  // Loop unrolled version
  f = 0;
  
  int l = 1L;
  int m = j;
  int n = g;
  int o = n;
  unsigned p = o;
q:;
  k = k >> l;
  i = p;
  if (i) {
    k = k << m;
    goto q;
  }
}

int main() {
  // Empty main function
}