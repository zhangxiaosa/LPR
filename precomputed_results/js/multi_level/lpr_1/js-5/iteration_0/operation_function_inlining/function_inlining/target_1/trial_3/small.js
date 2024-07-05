function opt() {
  let c = {};
  let d = Proxy;
  let e = new d(function a() {}, c);
  return function a() {};
}