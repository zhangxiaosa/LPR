function opt() {
  let a = [];
  let b = a.__proto__;
  const c = Array.prototype.unshift.call(b, 4294967297);
  b.length = 256;
  let d = [];
  let e = d.__proto__;
  const f = Array.prototype.pop.call(e);
  let g = f;
  return g;
}