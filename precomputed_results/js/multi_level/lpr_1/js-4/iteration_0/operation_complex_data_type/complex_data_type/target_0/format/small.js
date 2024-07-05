function opt() {
  const arr = [];
  const proto = arr.__proto__;

  proto.unshift(4294967297);
  proto.length = 256;

  const d = [];
  const e = d.__proto__;

  const f = e.pop();
  const g = f;

  return g;
}