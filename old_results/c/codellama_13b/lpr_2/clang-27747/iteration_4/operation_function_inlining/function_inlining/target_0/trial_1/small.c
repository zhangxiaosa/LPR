
int j;
int i;
int m;
struct {
  int d : 18;
  int e;
  int f;
} l = {24, 6738, 165};
l.d = j;
m = j && l.d;
i = l.d | -(l.f && l.d) - m;
