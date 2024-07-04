function opt() {
    [].__proto__.unshift(null);
    [].__proto__.length |= 256
    return Array.prototype.pop()
}