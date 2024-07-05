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
  i.d = j.e;
  int n = j.h && i.d;
  i.g = i.d | -(i.f && i.d) - n;
}