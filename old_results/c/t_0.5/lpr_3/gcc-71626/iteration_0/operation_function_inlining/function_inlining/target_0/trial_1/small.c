typedef long DataType;
typedef DataType VectorType __attribute__((__vector_size__(sizeof(DataType))));
VectorType fn2() {
  DataType c;
  VectorType f = {c};
  return f;
}