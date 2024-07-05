function opt() {
  const a = [];
  const b = new Proxy(a, Proxy);
  b.valueOf = () => {
    // Code from function c
  };
  const d = isFinite(b);
  return d;
}