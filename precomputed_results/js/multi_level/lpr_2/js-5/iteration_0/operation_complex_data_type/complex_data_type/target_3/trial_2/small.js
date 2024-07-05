function opt() {
  function a() {}
  const b = a;
  const c = {};
  const d = Proxy;
  let f;

  const e = new d(b, c);
  e.prototype = f;

  ({
      "prototype": a
  } = b);

  const g = a;
  return g;
}