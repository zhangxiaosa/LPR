struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};
struct c i;
int main() {
  struct c l = {24, 6738, 165};
  l.d = l.e; // Replace j.e with l.e
  int n = l.h && l.d;
  i.g = l.d | -(l.f && l.d) - n;
}