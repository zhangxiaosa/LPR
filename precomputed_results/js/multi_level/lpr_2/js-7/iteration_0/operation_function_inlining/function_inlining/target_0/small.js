function opt() {
    const a = [];
    const b = new Proxy(a, Proxy);

    // Inlined code of function c
    b.valueOf = function() {
        // Function body is empty
    };

    const d = isFinite(b);
    return d;
}