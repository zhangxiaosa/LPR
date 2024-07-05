function opt() {
    let ProxyObject = Proxy;
    let e = new ProxyObject(function a() {}, {});
    let f;
    e.prototype = f;
    ({
        "prototype": a
    } = e);
    return a;
}