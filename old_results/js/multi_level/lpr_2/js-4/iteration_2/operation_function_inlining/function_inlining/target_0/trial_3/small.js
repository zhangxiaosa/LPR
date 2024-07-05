function opt() {
    const g = Array.prototype.unshift.call(Array.prototype, 4294967297);
    Array.prototype.length = 256;
    const g = Array.prototype.pop.call(Array.prototype);
    return g;
}