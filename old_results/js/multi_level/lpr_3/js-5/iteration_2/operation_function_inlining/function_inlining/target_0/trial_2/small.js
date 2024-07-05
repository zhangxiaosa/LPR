function opt() {
    const b = function() {};
    let d = Proxy;
    let e = new d(b, {});
    e.prototype = undefined;
    ({
        "prototype": b
    } = b);
    return b;
}