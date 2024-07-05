
<SYS>

struct c {
  int d : 18;
  int e;
  int g;
};
struct c i;
int main() {
  struct c l;
  l.d = 0;
  int n = i.d && 0;
  int p = l.d | -(l.d && l.d) - n;
  i.g = p;
}

</SYS>
