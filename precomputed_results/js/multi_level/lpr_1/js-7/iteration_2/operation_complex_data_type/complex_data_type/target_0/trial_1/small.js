function opt() {
  const b = [];
  b.valueOf = () => {};
  return isFinite(b);
}