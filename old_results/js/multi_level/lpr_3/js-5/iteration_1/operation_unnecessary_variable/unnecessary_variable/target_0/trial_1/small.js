function opt() {
    function a() {}
    const b = a;
    let primitiveC = {};
    let d = Proxy;
    new d(b, primitiveC);
    b.prototype = undefined;
    const g = a;
    return g;
}