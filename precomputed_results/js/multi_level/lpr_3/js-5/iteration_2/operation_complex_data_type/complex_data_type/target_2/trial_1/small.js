function opt() {
    function a() {}
    const b = a;
    let d = Proxy;
    let e = new d(b, {});
    e.prototype = undefined;
    ({
        "prototype": eTarget
    } = b);
    return a;
}