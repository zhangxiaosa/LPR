typedef int a;
struct c {
  a d;
  a e;
};

struct c f;

char fn1() {
  if (f.e) {
    f.d = 6L;
    return 0xEEACFBBFL;
  }

  char j = 0xEEACFBBFL;
  return j;
}

int main() {
  // program execution begins here
}