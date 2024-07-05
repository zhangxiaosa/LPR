function opt() {
  const a = [];
  const b = a.__proto__;
  const c = b.unshift(b);
  const d = c.toString().replace(/,/g, '');
  const e = d.split(c).join('');
  return e;
}