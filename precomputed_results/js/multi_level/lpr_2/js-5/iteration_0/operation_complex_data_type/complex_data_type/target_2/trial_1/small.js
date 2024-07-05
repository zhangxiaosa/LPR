function opt() {
  function a() {}
  const b = a;
  const c = {};
  const d = Proxy;
  const e = new d(b, c);
  let f;
  e.prototype = f;
  ({"prototype": a} = b);
  const g = a;
  return g;
}