function opt() {
  const a = [];
  const b = a.__proto__;
  const c = b.unshift(4294967297);
  b.length = 256;
  const d = [];
  const e = d.__proto__;
  const f = e.pop();
  const g = f;
  
  // Decomposed variables for `a`
  const a_0 = a[0];
  const a_1 = a[1];
  const a_2 = a[2];
  // ...
  
  return g;
}