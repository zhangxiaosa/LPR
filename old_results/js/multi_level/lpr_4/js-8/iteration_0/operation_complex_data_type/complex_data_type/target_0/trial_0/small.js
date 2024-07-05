function opt() {
  let a = '';
  try {
    const b = Array.prototype;
    const c = b.toLocaleString.call(a);
    const d = Array.prototype.unshift.call(a, c);
  } catch {
    function e() {}
  }
  return e;
}