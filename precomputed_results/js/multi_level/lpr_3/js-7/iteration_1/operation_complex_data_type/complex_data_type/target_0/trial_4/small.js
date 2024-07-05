function opt() {
  const b_proxy = [];
  const b_valueOf = () => {};
  b_proxy.valueOf = b_valueOf;
  return isFinite(b_proxy);
}