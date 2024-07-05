function opt() {
    function a() {}
    const b = a;
    let c = {};
    let d = Proxy;
    let e = new d(b, c);
    let f;
    e.prototype = f;
    b = a;
    const g = a;
    return g;
}