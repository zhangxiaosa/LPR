function opt() {
  const a = function() {};
  const b = a;
  const c = {};
  const d = Proxy;
  const e = new d(b, c);
  let f;
  e.prototype = f;
  const prototype = a;
  const g = a;

  const result = g;

  return result;
}