function opt() {
    function a() {}
    const b = a;
    let primitiveC = {};
    let d = Proxy;
    /* The following lines are optimized out */
    /* let e = new d(b, primitiveC); */
    /* e.prototype = undefined; */
    ({
        "prototype": a
    } = b);
    const g = a;
    return g;
}