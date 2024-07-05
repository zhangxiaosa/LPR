function opt() {
  const emptyArray = [];
  const arrayPrototype = emptyArray.__proto__;
  arrayPrototype.unshift(Array);
  const arrayAsString = Array.toLocaleString();
  const paddedArrayAsString = arrayAsString.padStart(arrayPrototype.length);
  return paddedArrayAsString;
}