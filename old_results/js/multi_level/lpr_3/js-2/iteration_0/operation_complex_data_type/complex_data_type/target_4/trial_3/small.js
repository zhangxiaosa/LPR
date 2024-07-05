function opt() {
  const a = [];
  const b = Array.prototype;
  const c = b.unshift(b);
  const d = c.toLocaleString();

  // Decomposed variables
  const d1 = d.toString(); // String representation of the result

  const e = d1.replace(c.toString());
  return e;
}