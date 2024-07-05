
int d1 = j.d;
int e1 = j.e;
int d2 = l.d;
int e2 = l.e;
int n = d2 && e1;
l.d = d1 | -(d1 && e1) - n;
