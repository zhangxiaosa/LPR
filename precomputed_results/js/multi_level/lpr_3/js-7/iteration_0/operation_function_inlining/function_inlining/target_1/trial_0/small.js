function opt() {
    const b = new Proxy([], Proxy);

    b.valueOf = () => {
        // ...
        // Inlined code of function c
        // ...
    };

    return typeof b === 'number' && isFinite(b);
}