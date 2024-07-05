function opt() {
  const a = [];
  const bTarget = a;
  const bHandler = Proxy;
  const b = new bHandler(bTarget);
  b.valueOf = function() {};
  return isFinite(b);
}