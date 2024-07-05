function opt() {
    function a() {}
    const b = a;
    let primitiveC = undefined;
    let d = undefined;
    let e = new Proxy(b, primitiveC);
    e.prototype = undefined;
    ({
        "prototype": a
    } = b);
    const g = b;
    return d;
}