function opt() {
    function a() {}
    const d = Proxy;
    let f;
    ({
        "prototype": a
    } = a);
    const g = a;
    return g;
}