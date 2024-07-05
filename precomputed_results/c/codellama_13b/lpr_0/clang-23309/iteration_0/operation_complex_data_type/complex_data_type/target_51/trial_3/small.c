
a: signed short
b: signed int
c: signed long
d: unsigned char
e: signed short
g: unsigned int

// Functions
int fn2(int p1, short p2)
c fn3(c p1, c p2)
d fn4(d p1, d p2)
e fn5(e p1, e p2)
e fn6(d p1, e p2)
e p
void fn9(int p1, char *p2, int p3)
e u
c v
a w
e ab
a ac = 1L
d fn10(int, short)
d fn11(d, e, b, char)
a fn12(b, b, unsigned short, a, g)
int fn13()
d fn10(int p1, short p2)
d fn11(d p1, e p2, b p3, char p4)
a fn12(b p1, b p2, unsigned short p3, a p4, g p5)
int main()

// Target to be optimized is `p` in function `main`.

// Optimized program:

int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}

// Explanation:

// The target `p` is a variable of type `e` which is an alias for `short`.
// The function `fn13` returns a value of type `d` which is an alias for `unsigned char`.
// The function `fn9` takes three arguments of type `int`, `char *`, and `int`.
// The function `fn12` takes five arguments of type `b`, `b`, `unsigned short`, `a`, and `g`.
// The function `fn11` takes four arguments of type `d`, `e`, `b`, and `char`.
// The function `fn10` takes two arguments of type `int` and `short`.
// The function `fn5` takes two arguments of type `e` and `e`.
// The function `fn6` takes two arguments of type `d` and `e`.
// The function `fn3` takes two arguments of type `c` and `c`.
// The function `fn2` takes two arguments of type `int` and `short`.
// The function `fn4` takes two arguments of type `d` and `d`.
