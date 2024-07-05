function opt() {
    const a = function() {}; // Inlined the function definition of a
    const b = a;
    let e = new Proxy(b, {});
    e.prototype = undefined;
    ( {
        "prototype": a
    } = b );
    return a;
} 
