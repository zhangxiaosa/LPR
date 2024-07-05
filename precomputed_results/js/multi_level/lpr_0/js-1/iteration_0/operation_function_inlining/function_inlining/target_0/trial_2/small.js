function opt() {
  const a = [Uint8ClampedArray];
  const b = Object.getPrototypeOf(a); // Inlined a.__proto__
  a.unshift(a); // Inlined b.unshift(a)
  const d = a.toLocaleString();
  const e = String.prototype.padStart.call(d, b.length); // Inlined d.padStart(c)
  return e;
}
