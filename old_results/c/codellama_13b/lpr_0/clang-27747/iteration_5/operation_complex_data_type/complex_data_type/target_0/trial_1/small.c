
struct c {
  int d;
};

struct c i;

int main() {
  struct c l;
  l.d = i.d;
  int n = i.d && l.d;
  i.d = l.d | -(l.d && l.d) - n;
}
