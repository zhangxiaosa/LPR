typedef int a;

typedef char b;

struct c {
  a d;
  a e;
};

struct c f;

b fn1() {
  a h = 6L;
  
  if (f.e) {
    f.d = h;
    b j = 0xEEACFBBFL;
    return j;
  }
  
  f.d = h;
  b j = 0xEEACFBBFL;
  f.d = h;
  j = 0xEEACFBBFL;
  f.d = h;
  j = 0xEEACFBBFL;

  return j;
}

int main() {}