
struct c {
  int d : 18;
  int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  l.d = j.d;
  int n = j.h && l.d;
  i.d = l.d | -(l.h && l.d) - n;
}
