
struct c {
  int d : 18;
  int e;
  int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  int d = l.d;
  int e = l.e;
  int h = l.h;
  int n = j.h && d;
  int m = -(j.h && d) - n;
  i.d = d | m;
}
