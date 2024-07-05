function opt() {
    function a() {}
    const d = Proxy;
    let f;
    const e = new d(a, {});
    e.prototype = f;
    const prototypeValue = a.prototype;
    const g = a;
    return g;
}