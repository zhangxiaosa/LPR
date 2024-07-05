function opt() {
  try {
    const b = [];
    b.__proto__ = b;
    const bToString = b.toLocaleString();
    b.unshift(bToString);
  } catch {
    function e() {}
  }
  return e;
}