function opt() {
    let e = new Proxy(function a() {}, {});
    e.prototype;
    {
        "prototype": a
    } = e;
    return a;
}