function opt() {
    function a() {}
    b = a
    c = d = Proxy
    e = new d(b, c)
    f = ""
    e.prototype = f;
    ({
        "prototype": a
    } = b)
    g = a
    return g
}