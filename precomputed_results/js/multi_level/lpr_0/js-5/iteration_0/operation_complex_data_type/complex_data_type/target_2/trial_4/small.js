function opt() {
  let e = new Proxy(function a() {}, {});
  let f;
  ({
    "prototype": a
  } = e);
  return f;
}