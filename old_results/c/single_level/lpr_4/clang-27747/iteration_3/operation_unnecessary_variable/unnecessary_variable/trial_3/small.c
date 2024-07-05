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
  l.d = i.e;
  signed p = i.e | -(l.f && i.e) - (i.h && i.e);
  i.g = p;
}