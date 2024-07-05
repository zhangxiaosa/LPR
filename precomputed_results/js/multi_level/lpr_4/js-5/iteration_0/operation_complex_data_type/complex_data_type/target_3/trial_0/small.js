function opt() {
  const a = "function";
  const b = a;
  const c = {};
  const d = "Proxy";
  const e = new Proxy(b, c);
  let f;
  e.prototype = f;
  ({ "prototype": a } = b);
  const g = a;
  return g;
}