function opt() {
  const d = Proxy;
  let f;
  const e = new d(() => {}, {});
  e.prototype = undefined;
  const g = () => {};
  return g;
}