
int k;
int l;
int m[5][8];
int p1_int;
int o;
int result;

int fn2(int p1_int, int p2_int) {
  int result;
  result = p1_int - p2_int;
  return result;
}

int fn3(int p1_int) {
  int o;
  int result;
  result = fn2(o, p1_int);
  return result;
}

int main() {
  return 0;
}
