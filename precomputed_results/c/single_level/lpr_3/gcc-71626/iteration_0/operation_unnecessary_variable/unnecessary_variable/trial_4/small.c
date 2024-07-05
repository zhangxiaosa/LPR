typedef long d __attribute__((__vector_size__(sizeof(long))));\n





















d fn2() {\n  d f = {fn1};\n  return f;\n}










main() {}
