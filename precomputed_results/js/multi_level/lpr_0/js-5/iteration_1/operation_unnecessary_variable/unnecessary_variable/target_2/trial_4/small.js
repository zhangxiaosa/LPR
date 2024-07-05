function opt() {
    let ePrimitive = new Proxy(function() {}, {});
    ePrimitive.prototype = undefined;
    return ePrimitive;
}