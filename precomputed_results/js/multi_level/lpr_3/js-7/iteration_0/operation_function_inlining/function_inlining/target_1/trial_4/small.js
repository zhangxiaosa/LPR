function opt() {
    const b = new Proxy([], Proxy);

    b.valueOf = () => {
        // ...
        // Inlined code of function c
        // ...
    };

    return Number.isFinite(b) && !Number.isNaN(parseFloat(b));
}