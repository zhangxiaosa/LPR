function opt() {
  function a() {}
  let f;
  const e = new Proxy(a, {});
  const g = a;
  return g;
}