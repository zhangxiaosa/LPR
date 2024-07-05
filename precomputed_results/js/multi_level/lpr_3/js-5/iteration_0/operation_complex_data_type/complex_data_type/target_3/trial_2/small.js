function opt() {
    function a() {}
    const b = a;
    let primitiveC = {};
    let d = Proxy;
    let e = new d(b, primitiveC);
    let f = Object.prototype;
    ({
        "prototype": a
    } = b);
    const g = a;
    return g;
}