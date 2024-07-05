function opt() {
    function a() {}
    let f;
    const e = new Proxy(a, {});
    e.prototype = undefined;
    return a;
}