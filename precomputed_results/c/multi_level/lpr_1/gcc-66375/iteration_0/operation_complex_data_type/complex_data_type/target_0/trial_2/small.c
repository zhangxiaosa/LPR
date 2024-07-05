char fn2_short_p1_int_p2;
short fn3_short_p1_short_p2;
int g;
int u;
int v_1_4;
int fn10_int_p1_int_p2_int_p3_int_p4;
int d_;
short fn11;
int main;
int j_;

char fn2(short p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

int g;
int u;
int v[1][4];

int fn10(int p1, int p2, int p3, int p4) {
  int d_ = 2;
  for (; u < 51; ++u)
    d_ = fn2(v[0][3] = fn3(4, d_), 3) + 0x9EE7F9D1C772505BLL;
  return 3;
}

short fn11() {
  fn10(6, 255UL, 1, 0);
  return 0;
}

int main() {
  int j_;
  fn11();
  for (j_ = 0; j_ < 4; j_++)
    g = v[0][j_];
  printf("checksum = %Xu\n", g);
  return 0;
}