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
  struct c l = {24, 6738, 165};

  i.g = (j.h && j.e) | -(l.f && l.d) - (j.h && j.e);

  return 0;
}