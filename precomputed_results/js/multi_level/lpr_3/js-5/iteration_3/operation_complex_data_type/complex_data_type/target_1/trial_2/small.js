function opt() {
    const a = function() {};
    const b = a;
    const e = new Proxy(b, {});
    e.prototype = undefined;
    ({
        "prototype": a
    } = b);
    return a;
}