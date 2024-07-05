function opt() {
  const array = [];
  const proxy = new Proxy(array, Proxy);
  const valueOfFn = function() {};
  proxy.valueOf = valueOfFn;
  return isFinite(proxy);
}