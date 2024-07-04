function opt() {
    a = []
    b = a.__proto__
    c = b.unshift(7)
    d = c.toLocaleString()
    e = d.replace(c)
    return e
}