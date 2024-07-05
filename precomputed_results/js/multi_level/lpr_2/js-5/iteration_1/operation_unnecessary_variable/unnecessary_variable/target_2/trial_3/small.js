function opt() {
    function a() {}
    let f;
    const e = new Proxy(a, {});
    e.prototype = a;
    const g = a;
    return g;
}