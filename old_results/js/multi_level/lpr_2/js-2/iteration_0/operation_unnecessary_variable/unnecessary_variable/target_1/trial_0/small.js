function opt() {
  const d = [1,2,3].unshift(Array.prototype).toLocaleString();
  const e = d.replace([1,2,3].unshift(Array.prototype).toLocaleString());
  return e;
}