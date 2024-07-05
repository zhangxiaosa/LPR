
struct c {
  int d : 18;
  int e;
  int g;
  int h;
};
struct c i;
struct c j;
int main() {
  struct c l = {24, 6738, 165};
  int m = 6738; // optimized out
  l.d = m;
  int n = j.h && l.d;
  int p = l.d | -(l.g && l.d) - n;
  i.g = p;
}
