function opt() {
  const b_target = [];
  const b_proxied = new Proxy(b_target, Proxy);
  b_proxied.valueOf = function() {};
  const result = isFinite(b_proxied);
  return result;
}