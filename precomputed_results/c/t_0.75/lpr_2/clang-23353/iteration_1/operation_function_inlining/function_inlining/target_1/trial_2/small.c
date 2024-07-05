struct g {
  signed h;
};
int i;
struct g j;

void fn2() {
  j.h ^= 6 * i & 1;
  j.h ^= 5 * i & 1;
  j.h ^= 4 * i & 1;
  j.h ^= 3 * i & 1;
  j.h ^= 2 * i & 1;
  j.h ^= 1 * i & 1;
  j.h ^= 0 * i & 1;
  j.h ^= -1 * i & 1;
  j.h ^= -2 * i & 1;
  j.h ^= -3 * i & 1;
  j.h ^= -4 * i & 1;
  j.h ^= -5 * i & 1;
  j.h ^= -6 * i & 1;
  j.h ^= -7 * i & 1;
}

void main() {
  fn2();
}