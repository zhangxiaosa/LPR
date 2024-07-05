function opt() {
  function a() {}
  ({"prototype": a} = a);
  return a;
}