
struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;
struct c j;

int main() {
  int m = j.e;
  int n = j.h && i.d;
  int o = i.d;
  int p = o | -(i.f && i.d) - n;
  i.g = p;
}
