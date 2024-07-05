struct c {
  int d : 18;
  int e;
  int f;
  int g;
};

struct c i;

int main() {
  struct c l = {24, 6738, 165};
  l.d = i.e;
  int n = l.d;
  i.g = l.d | -(l.f && l.d) - n;
}