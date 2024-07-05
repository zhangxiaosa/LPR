function opt() {
    const b = () => {};
    let primitiveC = {};
    let d = Proxy;
    let e = new d(b, primitiveC);
    e.prototype = undefined;
    ({
        "prototype": b
    } = b);
    const g = () => {};
    return g;
}