function opt() {
  function a() {}

  const b = a;
  let primitiveC = {};
  let d = Proxy;
  let e = new d(b, primitiveC);
  let f;
  e.prototype = f;

  ({"prototype": a} = b);

  const g = a;
  return g;
}