function opt() {
    const b = new Proxy([], Proxy);
    b.valueOf = function() {};
    const d = isFinite(b);
    return d;
}