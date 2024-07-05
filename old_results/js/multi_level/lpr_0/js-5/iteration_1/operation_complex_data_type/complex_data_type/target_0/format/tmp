function opt() {
    let ePrimitive = new Proxy(function a() {}, {});
    ePrimitive.prototype = undefined;
    ({
        "prototype": a
    } = ePrimitive);
    return a;
}