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
  
  l.d = j.e;
  
  int n = j.h && j.e;  // Optimized: Replaced l.d with j.e
  
  int o = j.e;  // Optimized: Replaced l.d with j.e
  
  int p = o | -(l.f && j.e) - n;  // Optimized: Replaced l.d with j.e
  
  i.g = p;
}