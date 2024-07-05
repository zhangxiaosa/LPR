function opt() {
  try {
    const a = [];
    const b = {};
    const c = b.toLocaleString();
    const d = a.unshift(c);
  } catch {
    function e() {}
  }
  return e;
}