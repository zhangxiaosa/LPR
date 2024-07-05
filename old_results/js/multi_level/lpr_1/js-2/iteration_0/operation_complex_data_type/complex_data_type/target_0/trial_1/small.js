function opt() {
  const a = [];
  const b = Object.getPrototypeOf(a);
  const c = b.unshift(b);
  const d = c.toString();
  const e = d.replace(c, '');
  return e;
}