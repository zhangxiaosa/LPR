function opt() {
  try {
    const a = [];
    Array.prototype.unshift(Array.prototype.toLocaleString());
  } catch {
    // e variable is unused and can be optimized out
  }
  return;
}