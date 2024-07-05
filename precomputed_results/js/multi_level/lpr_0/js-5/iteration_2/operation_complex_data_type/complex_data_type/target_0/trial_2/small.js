function opt() {
    let ePrimitive = function() {};
    ePrimitive.prototype = undefined;

    let prototypeValue = ePrimitive.prototype;

    return ePrimitive;
}