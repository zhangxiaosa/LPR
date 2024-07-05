typedef unsigned d;
d f;
signed g;

short fn1() {
  signed i;
  int j = 0x24F96B7BL;
  unsigned k;
  for (f = 0; f;)
    for (; j; --j)
      ;
  int l = 1L;
  int m = j;
  
  i = g; // Constant propagation of variable 'g'
  
q:
  k = k >> l;
  i = (signed)k; // Copy propagation of variable 'p'

  if (i) {
    k = k << m;
    goto q;
  }
}

int main() {}