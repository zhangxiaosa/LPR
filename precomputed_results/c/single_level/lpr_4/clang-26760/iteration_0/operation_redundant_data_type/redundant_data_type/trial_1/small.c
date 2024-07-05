typedef signed int a;
typedef short b;
typedef int c;
typedef unsigned int d;
typedef unsigned int e;

// Removed redundant data types

// d f;  =>  unsigned int f;
unsigned int f;

// a g;  =>  int g;
int g;

b fn1() {
  int i;  // a i;  =>  int i;
  int j = 0x24F96B7BL;  // c j = 0x24F96B7BL;  =>  int j = 0x24F96B7BL;
  unsigned int k;  // e k;  =>  unsigned int k;
  for (f = 0; f;)
    for (; j; --j)
      ;
  int l = 1L;  // c l = 1L;  =>  int l = 1L;
  int m = j;  // c m = j;  =>  int m = j;
  int n = g;  // a n = g;  =>  int n = g;
  int o = n;  // c o = n;  =>  int o = n;
  unsigned int p = o;  // e p = o;  =>  unsigned int p = o;
q:;
  k = k >> l;
  i = p;
  if (i) {
    k = k << m;
    goto q;
  }
}

int main() {}
