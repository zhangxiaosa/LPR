function opt() {
    function a() {}
    const b = a;
    let c = {};
    let d = Proxy;
    let proxyTarget = b;
    let proxyHandler = c;
    let e = new d(proxyTarget, proxyHandler);
    let f;
    e.prototype = f;
    ({
        "prototype": a
    } = b);
    const g = a;
    return g;
}