function opt() {
  const a = [];
  const b = Object.getPrototypeOf(a);

  function d() {}
  return d.toLocaleString().padEnd(String(b.unshift(undefined)));
}