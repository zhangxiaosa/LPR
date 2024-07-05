function opt() {
  const a = [];
  const b = new Proxy(a, Proxy);

  // Function c inlined
  b.valueOf = function () {
    // Actual code of function c
  };

  const d = isFinite(b);
  return d;
}