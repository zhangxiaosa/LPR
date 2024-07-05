function opt() {
    function a() {}
    let eTarget = a;
    let eHandler = {};
    let e = new Proxy(eTarget, eHandler);
    let f;
    e.prototype = f;
    ({
        "prototype": a
    } = a);
    const g = a;
    return g;
}