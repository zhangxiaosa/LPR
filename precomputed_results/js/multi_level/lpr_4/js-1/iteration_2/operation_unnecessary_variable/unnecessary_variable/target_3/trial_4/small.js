function opt() {
  const toLocaleStringResult = Uint8Array.toLocaleString();
  const unshiftResult = Array.prototype.unshift(Uint8Array);
  return toLocaleStringResult.padStart(unshiftResult);
}