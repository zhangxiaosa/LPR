
struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};
struct c i;
struct c j;
int main() {
  struct c l = {24, 6738, 165};
  int m = 6738;
  l.d = m;
  int n = 6738 && 24;
  int p = 24 | -(24 && 24) - n;
  i.g = p;
}
