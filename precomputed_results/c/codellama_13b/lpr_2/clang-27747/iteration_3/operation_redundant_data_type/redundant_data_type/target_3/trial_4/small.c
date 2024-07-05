
int i;
struct c {
  int d : 18;
  int e;
  int f;
};

int main() {
  struct c l = {24, 6738, 165};
  l.d = l.d;
  i = l.d | -(l.f && l.d);
}
