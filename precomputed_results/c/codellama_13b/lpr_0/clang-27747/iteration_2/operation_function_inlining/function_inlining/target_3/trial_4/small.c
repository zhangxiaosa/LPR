
struct c {
  int d : 18;
  int e;
  int h;
};

struct c i;
struct c j;

int main() {
  int d = 24;
  int e = 6738;
  int h = 165;
  int l = {d, e, h};
  l.d = j.e;
  int n = j.h && l.d;
  i.d = l.d | -(l.h && l.d) - n;
}
