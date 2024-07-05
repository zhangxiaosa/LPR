
struct c {
  int d : 18;
  int e;
  int f;
  int h;
};

struct c i;
struct c j;

int fn1(int j_e, int j_h, int l_f) {
  int m = j_e;
  int n = j_h && l_f;
  int o = m | -(l_f && l_f) - n;
  return o;
}

int main() {}
