
struct c {
  int d;
  int e;
  int g;
  int h;
};

int d = 18;
int e = 6738;
int g = 165;
int h = 0;

struct c i;
struct c j = {d, e, g, h};

int main() {
  int m = j.e;
  d = m;
  int n = j.h && d;
  int p = d | -(g && d) - n;
  i.g = p;
}
