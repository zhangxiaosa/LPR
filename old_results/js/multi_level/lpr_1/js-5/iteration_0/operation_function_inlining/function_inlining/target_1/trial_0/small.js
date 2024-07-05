function opt() {
  const b = a;
  let c = {};
  let d = Proxy;
  let e = new d(b, c);
  let f;
  e.prototype = f;
  ({"prototype": a} = b);
  return a;
}