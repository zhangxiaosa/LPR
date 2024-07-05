function opt() {
    function a() {}
    const b = a;
    let e = new Proxy(b, {});
    let f;
    ({
        "prototype": a
    } = b);
    const g = a;
    return g;
}