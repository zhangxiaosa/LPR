function opt() {
  function a() {}
  const b = a;
  let d = Proxy;
  let e = new d(a, {});
  e.prototype = undefined;
  ({
    "prototype": a
  } = a);
  return a;
}