function opt() {
    const a = [];
    const b = new Proxy(a, Proxy);
    b.valueOf = function() {};
    return isFinite(b);
}
