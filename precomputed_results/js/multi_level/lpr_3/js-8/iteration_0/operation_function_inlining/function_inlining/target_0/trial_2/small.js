function opt() {
  try {
    const a = [];
    let {"__proto__": b} = a;
    const c = b.toLocaleString();
    const d = b.unshift(c);
  } catch {
    // function e() is not used outside the catch block, so inlining it won't have any effect
    function e() {
    }
  }
  return e;
}