
struct c {
  int d : 18;
  int e;
  int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  int l_d = l.d;
  int l_h = l.h;
  l.d = j.e;
  int n = j.h && l_d;
  i.d = l_d | -(l_h && l_d) - n;
}
