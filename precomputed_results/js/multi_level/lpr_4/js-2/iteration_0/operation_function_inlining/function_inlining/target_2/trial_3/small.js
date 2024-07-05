function opt() {
  const a = [];
  const b = a.__proto__;
  b.unshift(b);
  const e = b.toLocaleString().toString().replace(new RegExp(b, 'g'), '');
  return e;
}