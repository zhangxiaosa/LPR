function opt() {
    let ePrimitive = null;
    ePrimitive.prototype = null;
    ({
        "prototype": ePrimitive
    } = ePrimitive);
    return ePrimitive;
}