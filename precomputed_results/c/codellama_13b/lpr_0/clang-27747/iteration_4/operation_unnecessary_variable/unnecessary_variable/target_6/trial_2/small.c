c
struct c {
  int d : 18;
};

struct c i;

int main() {
  struct c l;
  l.d = i.d;
  i.d = l.d | -(l.d && l.d);
}
