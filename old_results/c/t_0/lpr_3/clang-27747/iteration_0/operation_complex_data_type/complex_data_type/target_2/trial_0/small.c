typedef int b;
struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};
struct c i;
struct c j;

b fn1() {
  struct c {
    signed int d;
    unsigned int e;
    unsigned int f;
    signed int g;
    signed int h;
  } l = {24, 6738, 165};

  b m = j.e;
  l_d = m;
  b n = j.h && l_d;
  b o = l_d;
  signed int p = o | -(l_f && l_d) - n;
  i.g = p;
}

int main() {}
