struct c {
  int d;
  int e;
};

struct c f;

char fn1() {
  if (f.e)
    goto i;
  char j;
  return j;
i:
  f.d = 6L;
  char j = 0xEEACFBBFL;
  return j;
}

int main() {}