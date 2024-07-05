function opt() {
  const a = [];
  const b = Object.getPrototypeOf(a);
  const c = b.unshift(4294967297);
  b.length = 256;
  const d = [];
  const e = Object.getPrototypeOf(d);
  const f = e.pop();
  const g = f;
  return g;
}