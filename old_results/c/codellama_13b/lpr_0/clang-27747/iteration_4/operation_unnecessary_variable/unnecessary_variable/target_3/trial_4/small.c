
struct c {
  int d : 18;
};

struct c j;

int main() {
  struct c l;
  l.d = j.d;
  l.d = l.d | -(l.d && j.d);
}
