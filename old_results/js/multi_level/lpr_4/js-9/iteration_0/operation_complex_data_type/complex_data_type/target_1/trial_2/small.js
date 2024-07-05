function opt() {
  const a = [];
  const c = Object.assign([], Array.prototype);
  c.unshift(9007199254740991);
  return a[127];
}