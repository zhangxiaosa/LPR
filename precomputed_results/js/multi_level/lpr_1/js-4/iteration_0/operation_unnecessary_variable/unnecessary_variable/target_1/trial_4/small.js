function opt() {
  let proto = [].__proto__;
  proto.unshift(4294967297);
  proto.length = 256;
  let g = Array.prototype.pop();
  return g;
}