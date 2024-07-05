function opt() {
    const b = new Proxy([], function() {});
    b.valueOf = function() {};
    return isFinite(b);
}