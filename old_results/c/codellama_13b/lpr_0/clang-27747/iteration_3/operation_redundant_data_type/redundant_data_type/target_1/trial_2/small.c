
struct c {
  unsigned short int d: 18;
  unsigned short int e;
};

struct c i, j;

int main() {
  struct c l;
  l.d = j.e;
  int n = j.d && l.d;
  i.d = l.d | -(l.d && l.d) - n;
}
