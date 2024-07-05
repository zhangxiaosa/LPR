
struct c {
  int d : 18;
};

int i_d;

int main() {
  struct c l;
  l.d = i_d;
  int n = i_d && l.d;
  i_d = l.d | -(l.d && l.d) - n;
}

// Loop unrolling
for (int i = 0; i < 32; i++) {
  struct c l;
  l.d = i_d;
  int n = i_d && l.d;
  i_d = l.d | -(l.d && l.d) - n;
}
