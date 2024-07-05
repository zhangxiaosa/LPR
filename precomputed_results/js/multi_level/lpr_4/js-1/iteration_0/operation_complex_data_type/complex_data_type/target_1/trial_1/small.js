function opt() {
  const a = new Uint8Array();
  const b = Object.getPrototypeOf(a);
  const c = 1;
  const d = a.toLocaleString();
  const e = d.padStart(c);
  return b;
}