struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};
struct c i;

int main() {
  i.d = i.e;

  signed p = i.e | -(i.f && i.e) - (i.h && i.d);
  i.g = p;
}
