function opt() {
  function a() {}

  const e = new Proxy(a, {});
  e.prototype = undefined;

  const g = a;
  return g;
}