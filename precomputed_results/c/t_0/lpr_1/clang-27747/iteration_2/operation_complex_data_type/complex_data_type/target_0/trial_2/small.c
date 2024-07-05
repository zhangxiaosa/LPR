struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

int main() {
  struct c j;
  j.e = j.h && j.e;
  j.g = j.d | -(j.f && j.d) - (j.h && j.e);
}