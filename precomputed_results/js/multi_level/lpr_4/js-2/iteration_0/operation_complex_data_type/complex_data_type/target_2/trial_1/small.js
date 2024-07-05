function opt() {
  const a = [];
  const b = a.__proto__;
  const lengthB = b.length + 1;
  b.length = lengthB;
  const e = lengthB.toLocaleString().toString();
  const f = e.replace(lengthB, "");
  return f;
}