function opt() {
  const b = [];
  const b_proxy = new Proxy(b, Proxy);
  b_proxy.valueOf = () => {};
  const b_isFinite = isFinite(b_proxy);
  return b_isFinite;
}