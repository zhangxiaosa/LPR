function opt() {
    function a() {}
    let f;
    const e = new Proxy(a, {});

    // Decompose e.prototype
    const ePrototype = Object.create(a.prototype);

    // Assign f to ePrototype
    ePrototype.constructor = f;

    ({
        "prototype": a
    } = a);

    const g = a;
    return g;
}