function opt() {
    const f = Array.prototype.pop(); // "b" is optimized out
    const g = f;
    return g;
}