function opt() {
  let c = {};
  let d = Proxy;
  let e = new d(
    function a() {
    },
    c
  );
  e.prototype = function a() {
  }.prototype;
  return e;
}
