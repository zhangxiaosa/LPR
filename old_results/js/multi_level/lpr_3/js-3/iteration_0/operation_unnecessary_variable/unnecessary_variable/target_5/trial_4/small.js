function opt() {
  const a = [];
  const b = Object.getPrototypeOf(a);
  const c = b.unshift(undefined);

  function d() {}
  const e = d.toLocaleString();
  return e.padEnd(String(c));
}