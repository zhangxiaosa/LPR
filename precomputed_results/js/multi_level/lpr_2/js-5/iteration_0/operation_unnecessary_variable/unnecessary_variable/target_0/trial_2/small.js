function opt() {
  function a() {}
  const c = {};
  const d = Proxy;
  let f;
  const e = new d(a, c);
  e.prototype = f;
  const g = a;
  return g;
}