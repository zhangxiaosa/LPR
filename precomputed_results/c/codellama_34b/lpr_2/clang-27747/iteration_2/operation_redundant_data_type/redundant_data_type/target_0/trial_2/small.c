
<SYS>

struct c {
  int d : 18;
  int e;
  int h;
};
struct c i;
struct c j;

int main() {
  struct c l;
  l.d = j.e;
  int p = l.d | -(l.d && l.d) - j.h;
  i.d = p;
}

</SYS>
