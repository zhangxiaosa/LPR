function opt() {
    const a = [];
    const b = new Proxy(a, Proxy);
    b.valueOf = function() {};
    const d = (typeof b === 'number' && isFinite(b));
    return d;
}