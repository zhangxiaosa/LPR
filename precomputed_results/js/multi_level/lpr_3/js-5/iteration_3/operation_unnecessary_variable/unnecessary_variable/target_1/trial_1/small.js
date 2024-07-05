function opt() {
  function a() {}
  let e;
  e.prototype = undefined;
  ({"prototype": a} = a);
  return a;
}