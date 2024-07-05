function opt() {
    function a() {}
    const e = new Proxy(a, {});
    ({
        "prototype": a
    } = a);
    const g = a;
    return g;
}