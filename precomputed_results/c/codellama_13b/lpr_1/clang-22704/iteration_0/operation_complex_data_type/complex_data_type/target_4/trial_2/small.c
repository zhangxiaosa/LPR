
struct c_d {
  int d;
};

struct c_e {
  int e;
};

struct c {
  struct c_d d;
  struct c_e e;
};

struct c f;

int h_array[6];

int fn1() {
  if (f.e)
    goto i;
  fn1();
  int j;
  return j;
i:
  f.d.d = h_array[5];
  fn1();
  j = 0xEEACFBBF;
  return j;
}

int main() {}
