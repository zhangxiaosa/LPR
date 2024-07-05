fn1() {}

typedef long d_element;
#define D_SIZE <INSERT_D_SIZE>

d_element fn2() {
  long c = fn1;
  d_element f[D_SIZE];
  
  for (int i = 0; i < D_SIZE; i++) {
    f[i] = c;
  }
  
  return f;
}

int main() {}