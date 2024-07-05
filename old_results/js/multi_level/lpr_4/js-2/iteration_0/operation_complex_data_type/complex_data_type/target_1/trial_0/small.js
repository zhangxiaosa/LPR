function opt() {
  const a = [];
  const b = a.__proto__;
  return b.length.toString();
}