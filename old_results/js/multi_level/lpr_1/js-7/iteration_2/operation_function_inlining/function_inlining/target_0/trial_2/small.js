function opt() {
  const proxy = new Proxy([], Proxy);
  return (typeof proxy !== 'undefined' && isFinite(proxy));
}