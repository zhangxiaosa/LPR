function opt() {
  const a = [];
  const b = a.__proto__;
  const c = b.length;
  return b;
}