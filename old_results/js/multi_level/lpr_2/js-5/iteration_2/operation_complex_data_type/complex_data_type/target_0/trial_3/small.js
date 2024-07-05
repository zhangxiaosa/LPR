function opt() {
    function a() {}
    let f;
    const proxyHandler = {};
    const prototypeOfA = function a() {};
    const e = new Proxy(prototypeOfA, proxyHandler);
    e.prototype = f;
    const g = prototypeOfA;
    return g;
}