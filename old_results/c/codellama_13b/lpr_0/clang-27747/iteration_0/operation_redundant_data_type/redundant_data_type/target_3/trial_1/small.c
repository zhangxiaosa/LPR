
struct c {
  short d : 18;
  unsigned short e;
  unsigned short f;
  short g;
  short h;
};

struct c i;
struct c j;

int fn1() {
  struct c* l = {24, 6738, 165};
  short m = j.e;
  l->d = m;
  short n = j.h && l->d;
  short o = l->d;
  short g = o | -(l->f && l->d) - n;
  i.g = g;
}

int main() {}
