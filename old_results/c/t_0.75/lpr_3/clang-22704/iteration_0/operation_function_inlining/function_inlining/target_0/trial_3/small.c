typedef int a;
typedef char b;

struct c {
  a d;
  a e;
};

struct c f;

int main() {
  a h = 6L;

  if (f.e) {
    a h = 6L;

    if (f.e)
      goto i;

    a h = 6L;

    if (f.e)
      goto i;

    f.d = h;

    a h = 6L;

    if (f.e)
      goto i;

    return 0xEEACFBBFL;
  }

i:
  f.d = h;

  a h = 6L;

  if (f.e)
    goto i;

  return 0xEEACFBBFL;
}