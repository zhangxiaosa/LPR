
<SYS>

# Decomposition of the program into variables with primary data type

int fn2(int p1, int p2) { return p1 - p2; }

int t;
int v_int;
short w;
unsigned ac = 1;

int main() {
  short an;
  w = 0;
  an = 0x294A;
  t = ac || (an = w);
  short ao = 0xBCD1;
  int temp = ao - (1 - an);
  v_int = fn2(temp, t) & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}

# Decomposition of the program into variables with primary data type

int fn2(int p1, int p2) { return p1 - p2; }

int t;
int v_int;
short w;
unsigned ac = 1;

int main() {
  short an;
  w = 0;
  an = 0x294A;
  t = ac || (an = w);
  short ao = 0xBCD1;
  int temp = ao - (1 - an);
  v_int = fn2(temp, t) & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}

# Optimization of the program for the target variable 't'

int fn2(int p1, int p2) { return p1 - p2; }

int t;
int v_int;
short w;
unsigned ac = 1;

int main() {
  short an;
  w = 0;
  an = 0x294A;
  t = ac || (an = w);
  short ao = 0xBCD1;
  int temp = ao - (1 - an);
  v_int = fn2(temp, t) & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}

# Optimized program with optimized data types for the target variable 't'

int fn2(int p1, int p2) { return p1 - p2; }

int t;
int v_int;
short w;
unsigned ac = 1;

int main() {
  short an;
  w = 0;
  an = 0x294A;
  t = ac || (an = w);
  short ao = 0xBCD1;
  int temp = ao - (1 - an);
  v_int = fn2(temp, t) & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
