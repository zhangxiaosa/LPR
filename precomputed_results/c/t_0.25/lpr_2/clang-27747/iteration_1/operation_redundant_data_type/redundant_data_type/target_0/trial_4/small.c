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
  } l_temp = {24, 6738, 165};

  l_temp.d = j.e;

  int n = j.h && l_temp.d;

  i.g = l_temp.d | -(l_temp.f && l_temp.d) - n;
}