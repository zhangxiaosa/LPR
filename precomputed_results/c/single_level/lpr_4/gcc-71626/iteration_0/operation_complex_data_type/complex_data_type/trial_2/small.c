typedef long a;

void fn1() {}

/* Decomposition of d */
long d_0;
long d_1;
long d_2;
long d_3;
long d_4;
long d_5;
long d_6;
long d_7;

/* Function fn2 */
long fn2_0;
long fn2_1;
long fn2_2;
long fn2_3;
long fn2_4;
long fn2_5;
long fn2_6;
long fn2_7;

typedef long d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  a c = fn1;
  long c_0;
  long c_1;
  long c_2;
  long c_3;
  long c_4;
  long c_5;
  long c_6;
  long c_7;

  /* Variable f of type d */
  d f = {c};

  /* Decomposition of c */
  c_0 = c;
  c_1 = 0;
  c_2 = 0;
  c_3 = 0;
  c_4 = 0;
  c_5 = 0;
  c_6 = 0;
  c_7 = 0;

  /* Decomposition of f */
  d_0 = c_0;
  d_1 = c_1;
  d_2 = c_2;
  d_3 = c_3;
  d_4 = c_4;
  d_5 = c_5;
  d_6 = c_6;
  d_7 = c_7;

  return f;
}

int main() {}