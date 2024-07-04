function opt() {
    a = b = []
    b.__proto__.unshift(1)
    c = Reflect.get(a, 27)
    return c
}