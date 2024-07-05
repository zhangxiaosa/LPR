typedef int b;
struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct c i;

int main() {
  i.g = j.h | -(l.f && l.d) - (j.h && j.e);
}