struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct c i;
struct c j;

int main()
{
  struct c l = {24, 6738, 165};
  l.d = j.e;
  int temp = l.f && j.e;
  signed p = j.e | -temp - (j.h && j.e);
  i.g = p;
}