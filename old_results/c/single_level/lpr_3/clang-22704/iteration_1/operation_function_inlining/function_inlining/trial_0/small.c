typedef char b;
int d;
int e;

int main() {
  if (e)
    goto i;
  {
    if (e)
      goto i;
    {
      if (e)
        goto i;
      {
        if (e)
          goto i;
        {
          d = 6L;
          {
            if (e)
              goto i;
            b j;
            j = 0xEEACFBBFL;
            return j;
          }
        }
      }
    }
  }

i:
  d = 6L;
  {
    if (e)
      goto i;
    {
      if (e)
        goto i;
      {
        d = 6L;
        {
          if (e)
            goto i;
          b j;
          j = 0xEEACFBBFL;
          return j;
        }
      }
    }
  }
}