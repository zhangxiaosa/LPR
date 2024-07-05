function opt() {
  const a = [Uint8Array];
  const b = a.__proto__;
  // const d = a.toLocaleString(); (optimized out)
  const e = "".padStart(b.unshift(a));
  return e;
}