function opt() {
    const a = function() {};
    const b = a;
    const c = {};
    const d = Proxy;
    const e = new d(b, c);
    let f;
    e.prototype = f;
    const g = a;
    return g;
}