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
  {
    a h = 6L;
    if (f.e)
      goto i;
    {
      a h = 6L;
      if (f.e)
        goto i;
      {
        a h = 6L;
        if (f.e)
          goto i;
        {
          // Recursive base case
          b j;
          return j;
        }
i:
        f.d = h;
        {
          a h = 6L;
          if (f.e)
            goto i;
          {
            a h = 6L;
            if (f.e)
              goto i;
            {
              a h = 6L;
              if (f.e)
                goto i;
              {
                // Recursive base case
                b j;
                j = 0xEEACFBBFL;
                return j;
              }
              // Recursive call
              f.d = h;
              {
                a h = 6L;
                if (f.e)
                  goto i;
                {
                  a h = 6L;
                  if (f.e)
                    goto i;
                  {
                    // Recursive base case
                    b j;
                    j = 0xEEACFBBFL;
                    return j;
                  }
                  // Recursive call
                  f.d = h;
                  {
                    a h = 6L;
                    if (f.e)
                      goto i;
                    {
                      // Recursive base case
                      b j;
                      j = 0xEEACFBBFL;
                      return j;
                    }
                    // Recursive call
                    f.d = h;
                    {
                      // Recursive base case
                      b j;
                      j = 0xEEACFBBFL;
                      return j;
                    }
i:
                    f.d = h;
                    {
                      // Recursive base case
                      b j;
                      j = 0xEEACFBBFL;
                      return j;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}