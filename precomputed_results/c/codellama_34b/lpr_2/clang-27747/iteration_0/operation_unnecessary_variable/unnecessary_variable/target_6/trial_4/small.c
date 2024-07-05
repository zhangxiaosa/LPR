
struct c {
  int d : 18;
  int e;
  int g;
  int h;
};
struct c i;
struct c k;
int main() {
  struct c l = {24, 6738, 165};
  int m = l.e;
  l.d = m;
  int n = l.h && l.d;
  int p = l.d | -(l.g && l.d) - n;
  i.g = p;
}
