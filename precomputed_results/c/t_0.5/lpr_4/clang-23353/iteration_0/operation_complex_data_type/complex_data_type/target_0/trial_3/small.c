char fn1(char p1, char p2) { return p1 * p2; }

struct g {
  signed int h;
};

int i;
struct g j;

int main() {
  char p3;
  int loop_iteration;
  char fn1_result;
  signed int j_h;

  for (p3 = 6; p3 >= -7; p3 -= 1) {
    fn1_result = fn1(p3, i);
    loop_iteration = fn1_result && 1L;
    j_h ^= loop_iteration;
  }

  return 0;
}