function opt() {
    const b = function a() {};
    let d = Proxy;
    let e = new d(b, {});
    e.prototype = undefined;
    ({
        "prototype": {}
    } = b);
    return {};
}