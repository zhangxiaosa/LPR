function opt() {
    function a() {}
    let e = new Proxy(a, {});
    a.prototype = undefined;
    const g = a;
    return g;
}