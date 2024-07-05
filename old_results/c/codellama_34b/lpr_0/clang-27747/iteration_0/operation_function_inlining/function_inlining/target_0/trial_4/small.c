
typedef signed a;
typedef int b;

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct c i;
struct c j;

b fn1() {
  b m = j.e;
  i.g = m | -(j.h && j.d) - (j.h && j.d);
}

int main() {}
