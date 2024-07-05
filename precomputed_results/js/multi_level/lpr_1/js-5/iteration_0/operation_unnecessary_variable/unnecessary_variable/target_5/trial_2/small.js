function opt() {
  function a() {}
  let e = new Proxy(a, {});
  {
    "prototype": a
  } = a;
  const g = a;
  return g;
}