function opt() {
  let arrayPrototype = Array.prototype;
  let targetArray = new Uint8ClampedArray();
  let toLocaleStringResult = targetArray.toLocaleString();
  let arrayPrototypeUnshiftResult = arrayPrototype.unshift(targetArray);
  return toLocaleStringResult.padStart(arrayPrototypeUnshiftResult);
}