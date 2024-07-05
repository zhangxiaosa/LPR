typedef signed int a;
typedef int b;

signed int d;
unsigned int e;
unsigned int f;
signed int g;
signed int h;

struct c {
  signed int d : 18;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c i;
struct c j;

b fn1() {
  signed int l_d = 24;
  unsigned int l_e = 6738;
  unsigned int l_f = 165;

  b m = j.e;
  l_d = m;

  b n = j.h && l_d;
  b o = l_d;

  a p = o | -(l_f && l_d) - n;
  i.g = p;
}

int main() {}