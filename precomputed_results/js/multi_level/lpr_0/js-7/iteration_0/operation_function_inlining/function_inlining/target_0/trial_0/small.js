function opt() {
  const a = [];
  function c() {
  }
  a.valueOf = c;
  const d = isFinite(a);
  return d;
}