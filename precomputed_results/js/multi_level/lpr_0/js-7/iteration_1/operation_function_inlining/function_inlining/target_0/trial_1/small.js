function opt() {
    const b = new Proxy([], Proxy);
    b.valueOf = function() {};
    return typeof b === 'number' && isFinite(b);
}