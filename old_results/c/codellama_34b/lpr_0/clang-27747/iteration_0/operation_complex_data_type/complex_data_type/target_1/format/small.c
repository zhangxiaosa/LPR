
int d = 18;
int e = 6738;
int f = 165;
int g = 0;
int h = 0;

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;
int j = 0;

int main() {
  struct c l = {24, 6738, 165};
  int m = j;
  l.d = m;
  int n = j && l.d;
  int o = l.d;
  int p = o | -(l.f && l.d) - n;
  i.g = p;
}
