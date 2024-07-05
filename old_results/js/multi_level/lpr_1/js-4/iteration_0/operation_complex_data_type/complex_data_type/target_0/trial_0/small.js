function opt() {
  const aNumber = 123; // Replace array with a number (for example)
  const b = aNumber.__proto__;
  const c = b.unshift(4294967297);
  b.length = 256;
  const d = [];
  const e = d.__proto__;
  const f = e.pop();
  const g = f;
  return g;
}