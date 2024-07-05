function opt() {
    let e = new Proxy(function a() {}, {});
    e.prototype = void 0;
    ({
        "prototype": a
    } = e);
    return a;
}