function opt() {
  function a() {}
  let e = new Proxy(a, {});
  e.prototype = a;
  const g = a;
  return g;
}