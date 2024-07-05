function opt() {
  let a = [];
  let c = a.__proto__.length + 1;
  a.__proto__.length = c;
  const cStr = c.toLocaleString();
  const e = cStr.replace(/./g, '');
  return e;
}