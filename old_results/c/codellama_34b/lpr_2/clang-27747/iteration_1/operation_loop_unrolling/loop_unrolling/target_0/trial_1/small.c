
<SYS>

Optimized program:

struct c {
  int d : 18;
  int e;
  int g;
  int h;
};
struct c i;
struct c j;
int main() {
  struct c l = {24, 6738, 165};
  int m = j.e;
  l.d = m;
  int n = j.h && l.d;
  int p = l.d | -(l.g && l.d) - n;
  i.g = p;
}

// Unrolled loop:
int unrolled_loop() {
  struct c l = {24, 6738, 165};
  int m = j.e;
  l.d = m;
  int n = j.h && l.d;
  int p = l.d | -(l.g && l.d) - n;
  i.g = p;
}

int main() {
  unrolled_loop();
}

</SYS>
