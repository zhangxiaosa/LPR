function opt() {
  try {
    Array.prototype.unshift(Array.prototype.toLocaleString());
  } catch {
    // Optimized out
  }
  return;
}