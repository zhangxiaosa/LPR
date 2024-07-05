function opt() {
    const a = [];
    const b = new Proxy(a, Proxy);
    b.valueOf = function() {
        // Inline contents of function c
    };
    const d = isFinite(b);
    return d;
}