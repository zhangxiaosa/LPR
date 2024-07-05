
struct c {
  int d : 18;
  int e;
  int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  i.d = l.d | 0;
  return 0;
}
