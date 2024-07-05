
struct c {
  int d : 18;
};

struct c i, l;

int main() {
  l.d = 0;
  int n = 0;
  i.d = l.d | -(l.d && l.d) - n;
}
