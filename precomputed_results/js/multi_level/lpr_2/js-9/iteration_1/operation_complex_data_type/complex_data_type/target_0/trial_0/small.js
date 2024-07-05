function opt() {
  let a = null;
  let tmp = 9007199254740991;
  a = new Array(128);
  for (let i = 0; i < a.length; i++) {
    a[i] = tmp;
  }
  return a[127];
}