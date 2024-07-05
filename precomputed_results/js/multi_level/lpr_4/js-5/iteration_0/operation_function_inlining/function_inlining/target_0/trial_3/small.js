function opt() {
    // Inlined code of function a()
    
    // Original code after inlining
    const b = function () {};
    let c = {};
    let d = Proxy;
    let e = new d(b, c);
    let f;
    e.prototype = f;
    ({"prototype": b} = b);
    const g = b;
    return g;
}