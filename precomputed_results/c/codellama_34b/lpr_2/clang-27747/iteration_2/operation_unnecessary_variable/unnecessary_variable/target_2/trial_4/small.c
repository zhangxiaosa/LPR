
struct c {
  int d;
};

struct c i;

int main() {
  struct c l;
  l.d = 18;
  int n = 18;
  int p = 18 | -(18 && 18) - n;
  i.d = p;
}
