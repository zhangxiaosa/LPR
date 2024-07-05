
int d;
int e;
int h;

struct c {
  int d : 18;
  int e;
  int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  d = l.d;
  e = l.e;
  h = l.h;

  n = j.h && l.d;
  i.d = l.d | -(l.h && l.d) - n;
}
