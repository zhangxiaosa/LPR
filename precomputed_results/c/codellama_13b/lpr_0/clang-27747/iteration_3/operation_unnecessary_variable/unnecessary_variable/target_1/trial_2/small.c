
struct c {
  int d : 18;
  int e;
};

struct c i;
struct c j;

int main() {
  struct c l = j;
  int n = j.d && l.d;
  i.d = l.d | -(l.d && l.d) - n;
}
