
<</SYS>>

Given the following program and the specified data type, eliminate it, and substitute every instance of it with its associated original data type. The program is int fn1(p2) { return p2; }
struct m {
  int n : 18;
  int o : 1;
};
int r;
static int s = -5;
int u;
int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  int ae = ad.o;
  ad.o = u;
  r = ad.o % (~s / ae);
}

The target to be optimized is `int`: a primitive type for integers.

// Before optimization
int fn1(int p2) {
  return p2;
}

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5;
int u;

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  int ae = ad.o;
  ad.o = u;
  r = ad.o % (~s / ae);
}

// After optimization
int fn1(int p2) {
  return p2;
}

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5;
int u;

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  int ae = ad.o;
  ad.o = u;
  r = ad.o % (~s / ae);
}

// Optimized code
int fn1(int p2) {
  return p2;
}

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5;
int u;

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  int ae = ad.o;
  ad.o = u;
  r = ad.o % (~s / ae);
}

// Final optimized code
int fn1(int p2) {
  return p2;
}

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5;
int u;

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  int ae = ad.o;
  ad.o = u;
  r = ad.o % (~s / ae);
}

