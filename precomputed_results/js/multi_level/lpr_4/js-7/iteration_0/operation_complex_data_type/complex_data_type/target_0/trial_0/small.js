function opt() {
  const a = [];
  const bArray = new Proxy(a, Proxy);
  const bValueOf = function() {};
  const d = isFinite(bArray);
  return d;
}