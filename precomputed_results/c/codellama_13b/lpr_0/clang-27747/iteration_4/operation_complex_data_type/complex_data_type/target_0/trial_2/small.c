
struct c {
  int d : 18;
};

struct c i, j;

int main() {
  struct c l;
  l.d = j.d;
  int n = l.d && l.d;
  i.d = l.d | -(l.d && l.d) - n;
}
