
struct c {
  int d : 18;
};

struct c l;

int main() {
  l.d = l.d;
  int n = l.d && l.d;
  j.d = l.d | -(l.d && l.d) - n;
}
