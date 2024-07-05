
struct c {
  int h : 18;
  int e;
  int g;
  int f;
} i, j;

int main() {
  struct c l;
  int temp = j.e;
  l.h = temp;
  int p = l.h | (~165 & temp) - (j.f && temp);
  i.g = p;
}
