function opt() {
  const a = [];
  const aProto = a.__proto__;
  const bLength = aProto.length + 1;
  aProto.length = bLength;
  const e = bLength.toLocaleString().toString().replace(bLength);
  return e;
}