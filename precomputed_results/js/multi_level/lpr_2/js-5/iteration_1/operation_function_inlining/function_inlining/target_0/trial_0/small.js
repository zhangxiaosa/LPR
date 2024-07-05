function opt() {
    const d = Proxy;
    let f;
    const e = new d(function a() {}, {});
    e.prototype = a;
    ({
        "prototype": a
    } = function a() {});
    return a;
}