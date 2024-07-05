function opt() {
  try {
    const a = [];
    let {"__proto__": b} = a;
    const c = b.toLocaleString();
    const d = b.unshift(c);
  } catch (error) {
    // The catch block is removed
  }
  function e() {
    // Body of function `e`
  }
  return e;
}