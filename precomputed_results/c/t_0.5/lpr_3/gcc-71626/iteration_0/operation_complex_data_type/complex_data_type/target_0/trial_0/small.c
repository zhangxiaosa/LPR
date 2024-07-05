long a;
void fn1() {}
typedef long a_type;
a_type d __attribute__((__vector_size__(sizeof(a_type))));
a_type fn2() {
  long c = fn1;
  a_type f = {c};
  return f;
}
int main() {}