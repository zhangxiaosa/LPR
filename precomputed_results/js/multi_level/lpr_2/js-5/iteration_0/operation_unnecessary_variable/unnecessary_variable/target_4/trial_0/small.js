function opt() {
    function a() {}
    const d = Proxy;
    const e = new d(a, {});
    e.prototype = a;
    const g = a;
    return g;
}