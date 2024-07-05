function opt() {
  const a = [new Uint8ClampedArray()];
  const b = Object.getPrototypeOf(a);
  const c = b.unshift(a);
  const d = a.toLocaleString();
  const e = d.padStart(c);
  return e;
}