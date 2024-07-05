function opt() {
    let ePrimitive = new Proxy(function a() {}, {});
    ePrimitive.prototype = undefined;
    return ePrimitive;
}