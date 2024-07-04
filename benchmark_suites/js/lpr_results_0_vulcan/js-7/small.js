function opt() {
    b = new Proxy([], this)
    b.valueOf = function() {}
    return isFinite(b)
}