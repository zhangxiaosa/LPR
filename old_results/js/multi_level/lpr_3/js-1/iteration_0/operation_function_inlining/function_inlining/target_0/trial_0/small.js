function opt() {
  const a = [Uint8ClampedArray];
  const b = a.__proto__;
  const c = b.unshift(a);
  const d = a.toString();
  const e = ' '.repeat(c - d.length) + d;
  return e;
}
