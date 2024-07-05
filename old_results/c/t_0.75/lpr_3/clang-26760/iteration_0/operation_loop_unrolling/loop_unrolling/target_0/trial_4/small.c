typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
d f;
a g;

b fn1() {
  a i;
  c j = 0x24F96B7BL;
  e k;

  for (f = 0; j >= 4; j -= 4) {
    // Loop body (1st iteration)
    ;

    // Loop body (2nd iteration)
    ;

    // Loop body (3rd iteration)
    ;

    // Loop body (4th iteration)
    ;
  }

  // Handle remaining iterations if j < 4
  while (j > 0) {
    // Loop body
    ;

    --j;
  }

  c l = 1L;
  c m = j;
  a n = g;
  c o = n;
  e p = o;

q:
  k = k >> l;
  i = p;

  if (i) {
    k = k << m;
    goto q;
  }
}

int main() {}
