
struct c {
  int d : 18;
  int e;
  int f;
  int h;
};

struct c i;
struct c j;

int fn1() {
  int f_prime = j.f;
  int f_prime_comp = (j.h && f_prime) - (l.f && l.d) - n;
  i.f = f_prime_comp;
}

int main() {}
