function opt() {
  const a = [];
  const b = a.__proto__;
  const c = b.unshift(undefined);
  return undefined.padEnd(c);
}