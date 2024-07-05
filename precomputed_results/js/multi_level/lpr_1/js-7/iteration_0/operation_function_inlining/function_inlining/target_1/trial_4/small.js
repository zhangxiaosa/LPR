function opt() {
  const a = [];
  const b = new Proxy(a, Proxy);
  // Code from function c
  const d = isFinite(b);
  return d;
}