function opt() {
    a = []
    b = a.__proto__
    c = b.unshift(3)
    d = c
    e = d.toLocaleString()
    f = e.localeCompare(c)
    return f
}