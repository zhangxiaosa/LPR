function main() {
  // Code before the inlining
  ...

  // Inlined code of opt()
  const a = [Uint8Array];
  const c = a.__proto__.unshift(a);
  const e = a.toLocaleString().padStart(c);
  return e;

  // Code after the inlining
  ...
}