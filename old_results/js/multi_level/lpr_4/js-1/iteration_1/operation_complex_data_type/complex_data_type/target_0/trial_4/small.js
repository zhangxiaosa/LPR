function opt() {
  const a = [Uint8Array];
  const proto = a.__proto__;
  proto.unshift(a);
  const c = proto.length;
  const str = a.toLocaleString();
  const e = str.padStart(c);
  return e;
}