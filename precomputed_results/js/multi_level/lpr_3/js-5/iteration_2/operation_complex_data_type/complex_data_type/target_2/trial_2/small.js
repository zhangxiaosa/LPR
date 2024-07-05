function opt() {
    const a = function() {};
    const b = a;
    const d = Proxy;
    const e = new d(b, {});
    e.prototype = undefined;
    ({
        "prototype": a
    } = b);
    return a;
}