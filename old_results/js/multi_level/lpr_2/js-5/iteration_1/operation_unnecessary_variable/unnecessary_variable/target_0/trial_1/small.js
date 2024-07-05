function opt() {
    function a() {}
    let f;
    const e = new Proxy(a, {});
    a.prototype = f;
    return a;
}