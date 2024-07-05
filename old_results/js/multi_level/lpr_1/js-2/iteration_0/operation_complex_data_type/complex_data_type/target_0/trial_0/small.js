function opt() {
  let a = [];
  let b = Object.getPrototypeOf(a);
  let c = b.unshift(b);
  let d = c.toLocaleString();
  let e = d.replace(c, "");
  return e;
}