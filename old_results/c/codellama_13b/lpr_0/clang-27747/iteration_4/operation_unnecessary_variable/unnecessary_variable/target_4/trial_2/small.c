
struct c {
  int d : 18;
};

struct c i, j;

int main() {
  struct c l;
  l.d = j.d;
  int n = j.d && l.d;
  i.d = l.d | -n;
}
