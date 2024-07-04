function opt() {
    a = []
    b = a.__proto__
    b.unshift(7)
    b.length = 56
    c = []
    d = c.__proto__
    e = d.pop()
    f = e
    return f
}