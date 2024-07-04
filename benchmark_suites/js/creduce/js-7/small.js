function opt() {
    a = []
    b = new Proxy(a, Proxy)

    function c() {}
    b.valueOf = c
    d = isFinite(b)
    return d
}