function opt() {
    const b = function () {};
    let e = new Proxy(b, {});
    e.prototype = undefined;
    ({
        "prototype": b
    } = b);
    return b;
}