function opt() {
  function a() {}
  const b = a;
  const c = {};
  let d = Proxy;
  let b = a;
  let c = {};
  let e = new d(b, c);
  let f;
  e.prototype = f;
  let g = a;
  return e;
}