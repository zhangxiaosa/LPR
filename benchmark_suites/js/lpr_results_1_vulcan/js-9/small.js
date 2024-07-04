function opt() {
    Array.prototype.unshift(null)
    return Reflect.get([], 127)
}