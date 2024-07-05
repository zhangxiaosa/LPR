function opt() {
  const a = [];
  const b = a.__proto__;
  const c = b.unshift(undefined);
  const e = toLocaleString(); // Inlined function call
  const f = e.padEnd(c);
  return f;
}