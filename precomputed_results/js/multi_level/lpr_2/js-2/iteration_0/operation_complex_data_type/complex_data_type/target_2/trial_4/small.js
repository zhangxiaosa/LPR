function opt() {
  const a = [];
  const b = a.__proto__;
  const cValue = b.unshift(b);
  const dValue = cValue.toLocaleString();
  const eValue = dValue.replace(cValue, '');
  return eValue;
}