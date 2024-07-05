int main() {
  i.d = 24;
  i.e = 6738;
  i.f = 165;

  int n = i.h && i.e;

  i.g = i.e | -(i.f && i.e) - n;
}