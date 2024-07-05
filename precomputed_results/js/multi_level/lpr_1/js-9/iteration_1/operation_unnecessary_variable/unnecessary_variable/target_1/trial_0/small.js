function opt() {
    Array.prototype.unshift(9007199254740991);
    return [].get([], 127);
}