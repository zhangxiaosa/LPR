function opt() {
    function a() {}
    let b = a;
    let c = {};
    let d = Proxy;
    let e = new d(a, c);
    let f;
    e.prototype = f;
    ({
        "prototype": a
    } = a);
    const g = a;
    return g;
}