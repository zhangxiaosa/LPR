function opt() {
  const a = [];
  const bProto = Array.prototype;
  const b = bProto;
  const c = b.unshift(b);
  const d = c.toLocaleString();
  const e = d.replace(c);
  return e;
}