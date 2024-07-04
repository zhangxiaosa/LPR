function opt() {
    Array.prototype.unshift(null);
    Array.prototype.length |= 256
    return Array.prototype.pop()
}