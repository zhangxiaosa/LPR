function opt() {
  let b = Array.prototype;
  b.unshift(4294967297);
  b.length = 256;
  let f = b.pop();
  let g = f;
  return g;
}