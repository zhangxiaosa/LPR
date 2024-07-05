
struct c {
  int d;
  int e;
};

struct c f;

int h_array[6];

int fn1() {
  int e;
  int j;

  if (e) {
    goto i;
  }

  fn1();

  j = 0xEEACFBBF;
  return j;

i:
  f.d = h_array[5];
  fn1();
  j = 0xEEACFBBF;
  return j;
}

int main() {}
