function opt() {
    function a() {}
    const b = a;
    let e = new Proxy(b, {});
    e.prototype = undefined;
    ({
        "prototype": a
    } = b);
    return a;
}
