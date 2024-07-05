function opt() {
    function a() {}
    const b = a;
    let primitiveC = {};
    let d = Proxy;
    
    // Decomposed variables
    let eProperty1 = b;
    let eProperty2 = primitiveC;

    let e = new d(eProperty1, eProperty2);
    let f;
    e.prototype = f;
    
    ({
        "prototype": a
    } = b);
    
    const g = a;
    return g;
}