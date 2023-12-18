int fn3(p1, p2) { return 1; }

int u;
int v;
static int w = 254;

int ad1_dim1_size;
const int ad1_dim2_size = 5;
const int ad1_dim3_size = 7;

int ad1_elem0_0_0;
int ad1_elem0_0_1;
int ad1_elem0_0_2;
// ...
int ad1_elem0_1_0;
int ad1_elem0_1_1;
int ad1_elem0_1_2;
// ...
int ad1_elem0_2_0;
int ad1_elem0_2_1;
int ad1_elem0_2_2;
// ...
int ad1_elem1_0_0;
int ad1_elem1_0_1;
int ad1_elem1_0_2;
// ...
int ad1_elem1_1_0;
int ad1_elem1_1_1;
int ad1_elem1_1_2;
// ...
int ad1_elem1_2_0;
int ad1_elem1_2_1;
int ad1_elem1_2_2;
// ...

int af;

int fn4(p1, p2) { return p1 % p2; }

int fn9() {
  int ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    for (; i < 3; i += 4)
      ;
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad1_elem1_2_2 = fn4(fn3(1, u--), 4294967295);
    return 0;
  }
}

int main() {
  fn9();
  int s;
  s = ad1_elem2_1_0;
  printf("s_unrolled_iter_1 = %X\n", s);
  return 0;
}