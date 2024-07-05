function opt() {
  const a = [];
  const b = new Proxy(a, Proxy);
  function c() {
  }
  b.valueOf = c;

  const d = Number.isFinite(+(b));
  return d;
}