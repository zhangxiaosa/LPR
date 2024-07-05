function opt() {
  function a() {}
  a.prototype = undefined;
  ({
    "prototype": a
  } = a);
  const g = a;
  return g;
}