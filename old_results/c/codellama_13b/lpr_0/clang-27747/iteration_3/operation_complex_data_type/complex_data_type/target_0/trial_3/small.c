
struct c {
  int d;
  int e;
};

int main() {
  struct c i, j;
  struct c l;
  int d_j = j.d;
  int d_l = l.d;
  int e_j = j.e;
  int e_l = l.e;
  int n = j.d && l.d;
  int m = -(l.d && l.d) - n;
  i.d = d_l | m;
  i.e = e_l;
}
