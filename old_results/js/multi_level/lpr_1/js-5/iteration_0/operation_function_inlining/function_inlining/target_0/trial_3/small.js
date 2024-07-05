function opt() {
  const b = function () {};

  let prototype;
  ({ "prototype": prototype } = b);

  return prototype;
}