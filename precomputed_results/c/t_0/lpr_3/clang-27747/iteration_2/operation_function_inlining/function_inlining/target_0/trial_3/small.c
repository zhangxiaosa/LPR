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
  i.d = j.e;
  i.g = j.e | -(l.f && j.e) - (j.h && j.e);
}