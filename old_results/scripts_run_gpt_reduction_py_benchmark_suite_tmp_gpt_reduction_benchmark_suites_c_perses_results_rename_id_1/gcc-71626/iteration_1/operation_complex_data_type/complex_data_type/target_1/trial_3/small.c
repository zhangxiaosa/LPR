typedef long d __attribute__((__vector_size__(sizeof(long))));

fn1() {}

long f1, f2, f3, f4, f5, f6, f7, f8; // Decomposed variables to represent 'f'

d fn2() {
  d f = {fn1};
  
  f1 = f[0];
  f2 = f[1];
  f3 = f[2];
  f4 = f[3];
  f5 = f[4];
  f6 = f[5];
  f7 = f[6];
  f8 = f[7];
  
  return f;
}

main() {}