function opt() {
    function a() {}
    const b = a;
    let d = Proxy;
    let e = new d(b, primitiveC);
    e.prototype = undefined;
    ({
        "prototype": a
    } = b);
    return a;
}