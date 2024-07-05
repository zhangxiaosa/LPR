function opt() {
  const a = [uint8array];
  const b = a;
  const c = b.unshift(a);
  const d = a.toString();
  return d;
}