function opt() {
  const a = [];
  const b = new Proxy(a, Proxy);

  b.valueOf = function() {
    // Function c code
  };

  const d = isFinite(b);
  return d;
}