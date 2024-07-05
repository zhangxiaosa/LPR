function opt() {
  let f;
  {
    "prototype": a
  } = new Proxy(function a() {}, {});
  return a;
}