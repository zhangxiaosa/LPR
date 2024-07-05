function opt() {
  function a() {}
  let e = new Proxy(a, {});
  e.prototype = undefined;
  ({} = a);
  return a;
}