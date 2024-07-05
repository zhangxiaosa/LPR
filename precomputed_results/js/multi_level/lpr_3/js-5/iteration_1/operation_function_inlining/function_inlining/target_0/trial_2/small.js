function opt() {
    const b = function a() {};
    let primitiveC = {};
    let d = Proxy;
    let e = new d(b, primitiveC);
    e.prototype = undefined;
    ({
        "prototype": b
    } = b);
    return b;
}