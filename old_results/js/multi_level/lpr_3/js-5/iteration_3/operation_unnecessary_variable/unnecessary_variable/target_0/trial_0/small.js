function opt() {
    function a() {}
    let e = new Proxy(a, {});
    e.prototype = undefined;
    return a;
}