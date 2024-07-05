int r;
static int s = -5;
unsigned t;
unsigned fn1(int p2) { return p2; }
struct m { int n; int o; };
int fn4() { struct m ad = {1957}; ad.o = fn1(5); int ae; ae = ad.o; ad.o = 0; r = t % (~s / ae); return ad.o; }
int main() { fn4(); }