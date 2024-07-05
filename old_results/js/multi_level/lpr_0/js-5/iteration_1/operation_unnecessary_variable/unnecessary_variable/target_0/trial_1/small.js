function opt() {
    let ePrimitive = new Proxy(function a() {}, {});
    ePrimitive.prototype = undefined;
    ({
        "prototype": ePrimitive
    } = ePrimitive);
    return ePrimitive;
}