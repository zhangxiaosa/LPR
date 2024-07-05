struct c j;
int main() {
  j.d = j.e;
  j.g = j.e | -((j.f && j.e) - (j.h && j.e));
}