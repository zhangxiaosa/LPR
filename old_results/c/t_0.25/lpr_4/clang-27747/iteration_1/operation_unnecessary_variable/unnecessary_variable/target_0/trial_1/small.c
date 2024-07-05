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
  int n = j.h && j.e;
  i.g = j.e | -(j.f && j.e) - n;
}