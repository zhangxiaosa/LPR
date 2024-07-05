function opt() {
  function a() {}
  const d = Proxy;
  const e = new Proxy(a, {});
  return a;
}