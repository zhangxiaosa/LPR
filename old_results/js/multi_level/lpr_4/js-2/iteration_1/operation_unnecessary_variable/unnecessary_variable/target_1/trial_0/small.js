function opt() {
  let a = [];
  let c = a.__proto__.length + 1;
  a.__proto__.length = c + 1;
  let optimizedString = (a.__proto__.length + 1).toLocaleString().replace(a.__proto__.length + 1);
  return optimizedString;
}