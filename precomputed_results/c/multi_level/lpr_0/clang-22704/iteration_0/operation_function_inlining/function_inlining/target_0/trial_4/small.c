#include <stdio.h>

typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;

int main() {
  {
    a h = 6L;
    if (f.e)
      goto i;
    {
      a h = 6L;
      if (f.e)
        goto i;
      // Content of fn1() inlined here
      if (f.e)
        goto i;
      {
        a h = 6L;
        if (f.e)
          goto i;
        b j;
        return j;
      i:
        f.d = h;
        if (f.e)
          goto i;
        {
          a h = 6L;
          if (f.e)
            goto i;
          j = 0xEEACFBBFL;
          return j;
        }
      }
      // End of fn1() inlined
      if (f.e)
        goto i;
      j = 0xEEACFBBFL;
      return j;
    i:
      f.d = h;
      if (f.e)
        goto i;
      j = 0xEEACFBBFL;
      return j;
    }
  }
}