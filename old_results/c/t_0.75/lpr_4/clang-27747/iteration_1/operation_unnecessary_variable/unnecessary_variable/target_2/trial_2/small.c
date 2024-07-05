struct c j;
int main() {
  j.d = j.e;
  int n = j.h && j.e;
  j.g = j.e | -(j.f && j.e) - n;
}