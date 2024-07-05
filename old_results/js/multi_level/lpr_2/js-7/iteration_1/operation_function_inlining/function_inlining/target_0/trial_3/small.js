function opt() {
    const a = [];
    const b = new Proxy(a, Proxy);
    b.valueOf = function() {};
    const d = ((num) => {
        return typeof num === 'number' && isFinite(num);
    })(b);
    return d;
}