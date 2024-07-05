typedef long d __attribute__((__vector_size__(sizeof(long))))\;
d fn2() {\n  long c = fn1;\n  d f = {c};\n  return f;\n}

main() {}