struct {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
} i;
struct {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
} j;
int main() {
  struct {
    signed d : 18;
    unsigned e;
    unsigned f;
    signed g;
    signed h;
  } l = {24, 6738, 165};
  l.d = j.e;
  int n = j.h && l.d;
  signed p = l.d | -(l.f && l.d) - n;
  i.g = p;
}