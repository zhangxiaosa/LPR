
struct c {
  int d;
  int e;
};

struct c f;

int h_array[6];

int fn1() {
  if (f.e) {
    goto i;
  } else {
    fn1();
    int j;
    return j;
  }
i:
  f.d = h_array[5];
  fn1();
  j = 0xEEACFBBF;
  return j;
}

int main() {}
