function opt() {
  const a = [Uint8Array];
  const b = a.__proto__;
  const c = Array.prototype.unshift.call(b, a);
  const d = a.toLocaleString();
  const e = d.padStart(Number(c));
  return e;
}