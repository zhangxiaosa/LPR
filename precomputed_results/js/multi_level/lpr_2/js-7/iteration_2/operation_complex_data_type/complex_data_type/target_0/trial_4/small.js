function opt() {
  const arrayObject = [];
  const proxyObject = new Proxy(arrayObject, Proxy);
  const valueOfFunction = function() {};
  const b = proxyObject;
  b.valueOf = valueOfFunction;
  return isFinite(b);
}