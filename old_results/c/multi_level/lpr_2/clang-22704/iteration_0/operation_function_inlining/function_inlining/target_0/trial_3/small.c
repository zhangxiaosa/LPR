typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;
b fn1()
{
  if (f.e)
    goto i;

  // Inlined code from fn1()
  {
    a h = 6L;
    if (f.e)
      goto i;
    {
      if (f.e)
        goto i;

      // Inlined code from fn1()
      {
        a h = 6L;
        if (f.e)
          goto i;
        {
          f.d = h;
          if (f.e)
            goto i;
          goto i;
i:
          f.d = h;
          if (f.e)
            goto i;
        }
      }

      j = 0xEEACFBBFL;
      return j;
    }
  }

i:
  f.d = h;
  if (f.e)
    goto i;
}

int main() {}