
struct c {
  int d;
  int e;
};

int f_d;
int f_e;

struct c f;

int h_array[6];

int fn1() {
  if (f_e)
    goto i;
  fn1();
  int j;
  return j;
i:
  f_d = h_array[5];
  fn1();
  j = 0xEEACFBBF;
  return j;
}

int main() {}
