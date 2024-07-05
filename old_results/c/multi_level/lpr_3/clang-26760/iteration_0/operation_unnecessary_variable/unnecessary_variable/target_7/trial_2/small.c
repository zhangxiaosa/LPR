typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
d f;
a g;

int main() {
  c j = 0x24F96B7BL;
  c m = 0x24F96B7BL;
  c o = g;

  e p = o;

q:
  p = p >> 1;

  if (p) {
    p = p << m;
    goto q;
  }
}