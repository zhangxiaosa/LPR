function opt() {
  function a() {}
  const b = a;
  const c = {};
  let d = Proxy;
  let e = new d(b, c);
  let f;
  e.prototype = f;
  ({ "prototype": a } = b);
  const g = a;
  return g;
}