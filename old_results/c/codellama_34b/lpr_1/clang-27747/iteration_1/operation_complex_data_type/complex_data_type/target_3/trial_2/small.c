
struct c {
  int d : 18;
  int e;
  int g;
  int h;
};

int d_primitive = i.d;
int e_primitive = i.e;
int g_primitive = i.g;
int h_primitive = i.h;

int main() {
  struct c l;
  int m = e_primitive;
  l.d = m;
  int n = h_primitive && d_primitive;
  int p = d_primitive | -(d_primitive && d_primitive) - n;
  g_primitive = p;
}
