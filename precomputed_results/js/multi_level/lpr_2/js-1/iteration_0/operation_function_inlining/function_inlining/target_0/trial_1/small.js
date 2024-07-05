function opt() {
  const a = [Uint8ClampedArray];
  const b = a.__proto__;
  const c = Object.getPrototypeOf(a).__proto__.unshift.call(a, a);
  const d = Array.prototype.toLocaleString.call(a);
  const e = d.padStart(c);
  return e;
}