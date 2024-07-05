function opt() {
  const a = [];
  const b = a.__proto__;
  const c = b.toLocaleString();
  const d = a.unshift(c);
  
  return d;
}