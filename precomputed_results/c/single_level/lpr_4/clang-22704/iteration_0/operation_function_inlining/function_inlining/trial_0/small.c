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

  a j;

i:
  f.d = h;

  if (f.e)
    goto i;

  j = 0xEEACFBBFL;

  return j;
}