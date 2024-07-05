function opt() {
  const a = [];
  const c = Array.prototype;
  c.unshift = Array.prototype.unshift;

  const d = c.unshift.call(b, 9007199254740991);

  const e = Reflect.get.call(a, 127);

  return e;
}