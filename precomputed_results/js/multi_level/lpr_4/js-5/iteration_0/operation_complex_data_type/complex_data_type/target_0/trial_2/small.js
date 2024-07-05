function opt() {
  function a() {
  }
  const b = a;
  let c = {};
  let d = Proxy;
  let e = new d(b, c);
  let f;
  e.prototype = f;
  ({ "prototype": a } = b);
  const g = a;
  return g;
}

// Decomposed variables
const b_a = b.a;
const b_c = b.c;
const b_d = b.d;
const b_e = b.e;
const b_f = b.f;
const b_g = b.g;
