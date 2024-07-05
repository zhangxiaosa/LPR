function opt() {
  const a = [Uint8ClampedArray];
  const b = a.__proto__;
  const c = [].concat(a, b).length;
  const d = a.toLocaleString();
  const e = d.padStart(c);
  return e;
}