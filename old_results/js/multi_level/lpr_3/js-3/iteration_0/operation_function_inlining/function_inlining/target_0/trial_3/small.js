function opt() {
  const a = [];
  const b = a.__proto__;
  const c = b.unshift(undefined);
  const f = "".toLocaleString().padEnd(c);
  return f;
}