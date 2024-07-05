function opt() {
  const a = [];
  const b = new Proxy(a, Proxy);
  b.valueOf = function() {};
  const d = isFinite(b);
  
  // Decomposed variables
  const a_prim = a;
  
  return d;
}