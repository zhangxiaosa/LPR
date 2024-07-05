typedef int a;
typedef char b;

struct c {
  a d;
  a e;
};

struct c f;

b fn1() {
  a h = 6L;
  if (f.e)
    goto i;
  
  // Inlined code replacing the call to fn1();
  a h_1 = 6L;
  if (f.e)
    goto i_1;
  a h_2 = 6L;
  if (f.e)
    goto i_2;
  // ... Continue inlining recursively until there are no more calls to fn1()
  
  return j_2;
  
i_2:
  f.d = h_2;
  a h_3 = 0xEEACFBBFL;
  return h_3;

i_1:
  f.d = h_1;
  a h_2 = 0xEEACFBBFL;
  return h_2;
  
i:
  f.d = h;
  a j_1 = 0xEEACFBBFL;
  return j_1;
}

int main() {}
