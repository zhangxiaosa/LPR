function opt() {
  let arr = [];
  let proto = Object.getPrototypeOf(arr);

  proto.unshift(4294967297);
  Object.defineProperty(proto, 'length', { value: 256 });

  let d = [];
  let e = Object.getPrototypeOf(d);

  let f = e.pop.call(d);
  let g = f;

  return g;
}