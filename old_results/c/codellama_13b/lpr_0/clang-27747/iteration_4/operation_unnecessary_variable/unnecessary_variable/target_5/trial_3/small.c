
struct c {
  int d : 18;
};

struct c i;

int main() {
  struct c l;
  l.d = 0; // assuming j.d is not used
  int n = 0;
  i.d = l.d | -n;
}
