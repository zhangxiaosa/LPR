typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;

int main() {
  a h = 6L;
  if (f.e)
    goto i;
  
  a h1 = 6L;
  if (f.e)
    goto i1;
  f.d = h1;
  a j = 0xEEACFBBFL;
  return j;

i1:
  f.d = h1;
  a j1 = 0xEEACFBBFL;
  return j1;

i:
  f.d = h;
  a j2 = 0xEEACFBBFL;
  return j2;
}