function opt() {
    a = [Uint8ClampedArray]
    b = a.__proto__
    c = b.unshift(a)
    d = a.toLocaleString()
    e = d.padStart(c)
    return e
}