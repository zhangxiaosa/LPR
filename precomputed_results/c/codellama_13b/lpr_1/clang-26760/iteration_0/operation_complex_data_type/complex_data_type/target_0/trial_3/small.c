c
typedef unsigned int d;
typedef unsigned int e;
typedef signed long int long;

d f;
e g;
long h;

int main() {
  f = 0;
  g = 0;
  h = 0;

  while (f) {
    f++;
    h = h >> 1;
    if (h) {
      h = h << 1;
      goto q;
    }
  }

  return 0;
}
