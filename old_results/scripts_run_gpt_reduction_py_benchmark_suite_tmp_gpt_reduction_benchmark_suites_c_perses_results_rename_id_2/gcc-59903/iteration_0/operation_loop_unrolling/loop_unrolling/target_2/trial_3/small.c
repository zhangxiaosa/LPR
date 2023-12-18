typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
struct i {
  a j;
  a k;
  c l;
};
e m[4];
struct i n[2];
d fn3(p1) {
  struct i r;
  e s;
  struct i v;
  c w;
  c a;

  // Unroll Loop Iteration 0
  n[0] = v;
  v.l = m[0];
  struct i b;
  w = n[0].l && r.k;
  for (; a; a += 1)
    n[0] = b;

  // Unroll Loop Iteration 1
  n[0] = v;
  v.l = m[1];
  w = n[0].l && r.k;
  for (; a; a += 1)
    n[0] = b;
   
  // Unroll Loop Iteration 2
  n[0] = v;
  v.l = m[2];
  w = n[0].l && r.k;
  for (; a; a += 1)
    n[0] = b;
  
  return p1;
}

int main() {}