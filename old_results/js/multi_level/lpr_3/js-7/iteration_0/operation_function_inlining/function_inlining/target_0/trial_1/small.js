function opt() {
  const a = [];
  const b = new Proxy(a, Proxy);
  b.valueOf = function() {
    // Function body of original 'c' function
  };
  const d = isFinite(b);
  return d;
}