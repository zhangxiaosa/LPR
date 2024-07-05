
<SYS>

int d1 = i.d;
int e1 = i.e;
int g1 = i.g;
int h1 = i.h;

int m = e1;

struct c l;
l.d = m;

int n = h1 && l.d;
int p = l.d | -(l.d && l.d) - n;

i.g = p;

</SYS>
