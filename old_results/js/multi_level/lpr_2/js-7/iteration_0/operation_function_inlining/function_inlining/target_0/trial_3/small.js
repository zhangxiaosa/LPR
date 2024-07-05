function opt() {
  const a = [];
  const b = new Proxy(a, Proxy);
  b.valueOf = function() {
    // Contents of function c
  };
  
  const d = isFinite(b);
  return d;
}