function opt() {
    Array.prototype.unshift(null)
    Array.prototype.length |= 256
    var f = Array.prototype.pop()
    return f
}