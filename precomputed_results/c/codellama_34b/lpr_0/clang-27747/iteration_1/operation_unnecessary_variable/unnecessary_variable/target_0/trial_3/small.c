
struct c {
  int d : 18;
  int f;
};
struct c i;
int j;
int main() {
  struct c l = {24, 6738};
  l.d = j;
  int n = j && l.d;
  i.d = l.d | -(l.f && l.d) - n;
}

// Optimization using constant propagation
int main() {
  struct c l = {24, 6738};
  l.d = j;
  int n = j && l.d;
  i.d = l.d | -(l.f && l.d) - n;
  i.d = 24 | -(6738 && 24) - (j && 24);
  i.d = 24 | -(6738 && 24) - j;
  i.d = 24 | 0 - j;
  i.d = 24 - j;
}

// Optimization using copy propagation
int main() {
  struct c l = {24, 6738};
  l.d = j;
  int n = j && l.d;
  i.d = l.d | -(l.f && l.d) - n;
  i.d = j | -(6738 && j) - n;
  i.d = j | 0 - n;
  i.d = j - n;
}
