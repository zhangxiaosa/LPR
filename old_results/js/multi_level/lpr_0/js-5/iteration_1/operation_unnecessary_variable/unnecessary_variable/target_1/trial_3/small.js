function opt() {
    let ePrimitive = new Proxy(function() {}, {});
    ePrimitive.prototype = undefined;
    ({
        "prototype": ePrimitive
    } = new Proxy(function() {}, {}));
    return ePrimitive;
}