
typedef int e;
typedef int a;
typedef int b;
typedef int c;
typedef long d;

e fn1(e p1, int p2) { return p2; }

struct k {
  int l;
};

struct m {
  int n : 18;
  int o : 1;
};

a p;
struct k q;
c r;
static a s = -5L;
unsigned t;
c u;
unsigned v;

// Decomposing fn3 into variables with primary data type
int fn3_n = 1957;
int fn3_o = 5;
struct m fn3_ad = {1957};
struct k fn3_q1 = q;
struct k fn3_q2 = q;
c fn3_af = t;
c fn3_ae = fn3_ad.o;
c fn3_r = fn3_af % (~s / fn3_ae);

// fn3 function
b fn3(unsigned p1) {
  fn3_ad.o = fn1(v, fn3_o);
  fn3_ae = fn3_ad.o;
  fn3_ad.o = u;
  r = fn3_af % (~s / fn3_ae);
  fn3_ad.o;
}

int main() { fn4(); }

// Decomposing fn4 into variables with primary data type
e fn4_p1 = p;
struct m fn4_p2 = q;
struct k fn4_p3 = q;
c fn4_p5 = q.l;

// fn4 function
d fn4() {
  fn2(fn4_p1, fn4_p2, fn4_p3, fn4_p3, fn4_p5);
}

// Decomposing fn2 into variables with primary data type
a fn2_p1 = p;
struct m fn2_p2 = q;
struct k fn2_p3 = q;
c fn2_p5 = q.l;

// fn2 function
b fn2(a p1, struct m p2, struct k p3, struct k p4, c p5) { fn3(p5); }
