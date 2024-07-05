function opt() {
  try {
    const a = [];
    Array.prototype.unshift(Array.prototype.toLocaleString());
  } catch {
    // 'e' variable is not used, so it can be optimized out
  }
  return undefined; // Return value 'e' is optimized out
}