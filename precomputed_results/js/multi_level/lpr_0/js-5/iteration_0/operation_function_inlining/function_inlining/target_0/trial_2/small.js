function opt() {
    // Function inlined code
    // Replace all occurrences of `a` with its function body

    const b = function () {
        // Function body of `a` goes here
    };
    let c = {};
    let d = Proxy;
    let e = new d(b, c);
    let f;
    e.prototype = f;
    ({ "prototype": b } = b);
    const g = b;
    return g;
}