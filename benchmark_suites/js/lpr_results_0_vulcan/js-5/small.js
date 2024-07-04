function opt() {
    ePrimitive = new Proxy(function() {}, {})
    ePrimitive.prototype |= this;
    ({
        "prototype": ePrimitive
    } = ePrimitive)
    return ePrimitive
}