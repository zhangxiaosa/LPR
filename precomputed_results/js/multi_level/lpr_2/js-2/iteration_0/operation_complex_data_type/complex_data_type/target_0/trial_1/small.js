function opt() {
  const a = [];
  const aProto = Array.prototype;
  const aProtoUnshift = aProto.unshift;
  const c = aProtoUnshift.call(a, aProto);
  const d = c.toLocaleString();
  const e = d.replace(c);

  return e;
}