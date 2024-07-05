function opt() {
  const a = [Uint8Array];
  const b = a.__proto__;
  const c = b.unshift(a);
  const arr = Uint8Array.from(a[0]);
  const d = arr.join();
  const e = d.padStart(Number(c));
  const dArray = e.split(',');
  const dValues = dArray.map(Number);

  // Decompose dValues into variables with primary data types
  const [dValue1, dValue2, ...] = dValues;

  return e;
}