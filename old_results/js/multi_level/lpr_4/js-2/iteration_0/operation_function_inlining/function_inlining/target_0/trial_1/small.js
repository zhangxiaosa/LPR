function opt() {
  const a = [];
  const b = a.__proto__;
  const c = b.unshift(b);
  const d = c.toLocaleString();
  const e = d.split(",").join(c);
  return e;
}