
int j_h;
int n;
struct c {
  int d_1 : 8;
  int d_2 : 8;
  int e;
  int f;
};
short i_g;
int j_e;
int main() {
  struct c l = {24, 6738, 165};
  l.d_1 = j_e;
  l.d_2 = j_e >> 8;
  n = j_h && (l.d_1 | l.d_2);
  i_g = (l.d_1 | l.d_2) | -(l.f && (l.d_1 | l.d_2)) - n;
}
