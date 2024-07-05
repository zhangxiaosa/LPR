function opt() {
  let a = [];
  let bPrototype = Object.getPrototypeOf(a);
  bPrototype.unshift(2689987270);
  let bShifted = 1 >>> 2689987270;
  let optimizedB = bShifted;
  return optimizedB;
}