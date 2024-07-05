void fn1() {}

// Decomposition of complex data type

typedef long d[1];

long fn2_c = (long)&fn1;
long fn2_f[1] = {fn2_c};

int main() {}