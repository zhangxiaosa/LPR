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

int main() {
  int ld = 24;
  unsigned int le = 6738;
  unsigned int lf = 165;
  
  b m = j.e;
  ld = m;
  
  b n = j.h && ld;
  b o = ld;
  
  signed p = o | -(lf && ld) - n;
  i.g = p;
}