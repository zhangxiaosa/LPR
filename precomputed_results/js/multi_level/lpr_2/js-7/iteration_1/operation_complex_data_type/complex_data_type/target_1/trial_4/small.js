function opt() {
  const targetArray = [];
  const proxyConfig = Proxy;
  const proxiedArray = new Proxy(targetArray, proxyConfig);
  const valueOfMethod = function() {};
  const isFiniteResult = isFinite(proxiedArray);
  return isFiniteResult;
}