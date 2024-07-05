
struct c {
  int d : 18;
  int e;
  int h;
};
struct c j;
int main() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  int n = j.h && l.d;
  l.d = l.d | -(l.h && l.d) - n;
}
