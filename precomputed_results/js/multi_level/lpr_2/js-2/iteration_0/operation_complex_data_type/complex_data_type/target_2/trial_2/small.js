function opt() {
  const a = [];
  const c = a.unshift(a);
  const d = c.toLocaleString();
  const e = d.replace(c);
  return e;
}