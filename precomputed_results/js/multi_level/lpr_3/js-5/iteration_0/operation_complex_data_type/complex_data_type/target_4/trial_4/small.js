function opt() {
    function a() {}
    const b = a;
    let primitiveC = {};
    const e = { constructor: b, primitiveC };
    let f;
    e.prototype = f;
    ({ "prototype": a } = b);
    const g = a;
    return g;
}