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
  j.d = j.e;
  int n = j.h && j.d;
  signed p = j.d | -(j.f && j.d) - n;
  i.g = p;
}