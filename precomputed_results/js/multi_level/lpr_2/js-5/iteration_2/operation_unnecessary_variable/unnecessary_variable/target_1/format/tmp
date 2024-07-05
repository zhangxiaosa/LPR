function opt() {
    function a() {}
    const e = new Proxy(a, {});
    e.prototype = undefined;
    ({
        "prototype": a
    } = a);
    const g = a;
    return g;
}