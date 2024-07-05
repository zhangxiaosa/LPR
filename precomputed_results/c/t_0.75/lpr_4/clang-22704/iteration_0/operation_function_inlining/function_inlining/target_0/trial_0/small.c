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
  a h_1 = 6L;
  if (f.e)
    goto i_1;
  f.d = h_1;
  a j;
  j = 0xEEACFBBFL;
  return j;

i_1:
  f.d = h_1;
  a j_1;
  j_1 = 0xEEACFBBFL;
  return j_1;

i:
  f.d = h;
  a j_2;
  j_2 = 0xEEACFBBFL;
  return j_2;
}