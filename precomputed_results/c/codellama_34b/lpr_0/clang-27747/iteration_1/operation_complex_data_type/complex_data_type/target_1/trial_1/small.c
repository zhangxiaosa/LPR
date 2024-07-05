
int d = 18;
int f;
int j;
struct c {
  int d : 18;
  int f;
};
struct c i;

int main() {
  struct c l;
  l.d = 24;
  l.f = 6738;
  j = l.d & l.f;
  i.d = l.d | (l.f & l.d) - j;
}
