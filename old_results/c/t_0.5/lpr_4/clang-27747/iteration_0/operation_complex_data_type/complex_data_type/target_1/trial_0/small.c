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
  struct c l = {24, 6738, 165};
  
  j.e = l.e;
  j.h = l.h;
  j.d = l.e;
  
  int o = j.d;
  int p = o | -(l.f && j.d) - (j.h && j.d);
  i.g = p;
}