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
  i.g = j.e | -(l.f && j.e);
}