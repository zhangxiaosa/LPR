function opt() {
  const a = [ArrayBuffer];
  const b = a.__proto__;
  const c = b.unshift(a);
  const d = a.toLocaleString();
  const e = d.padStart(c);
  return e;
}