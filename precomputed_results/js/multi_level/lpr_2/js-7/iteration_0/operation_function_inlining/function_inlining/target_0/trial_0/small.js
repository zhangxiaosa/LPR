function opt() {
  const a = [];
  const b = new Proxy(a, Proxy);

  // Inlined code from function `c`
  Object.defineProperty(b, 'valueOf', {
    value: function () {
      // code from function `c`
    },
    writable: true,
    configurable: true,
  });

  // Inlined code from function `isFinite(b)`
  return typeof b === 'number' && isFinite(b);
}