typedef signed signed;
typedef int int_type;
typedef unsigned int unsigned_int_type;
unsigned_int_type f;
signed g;

int main() {
  signed i;
  int_type j = 0x24F96B7BL;
  unsigned_int_type k;
  for (f = 0;)
    --j;
  int_type l = 1L;
  int_type m = j;
  signed n = g;
  int_type o = n;
  unsigned_int_type p = o;

q:
  k = k >> l;
  i = p;
  if (i) {
    k = k << m;
    goto q;
  }
}