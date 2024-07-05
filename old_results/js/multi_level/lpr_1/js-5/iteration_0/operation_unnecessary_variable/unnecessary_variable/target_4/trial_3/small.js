function opt() {
    function a() {}

    let e = new Proxy(a, {});
    let f;

    e.prototype = f;
    ({
        "prototype": a
    } = a);

    const g = a;
    return g;
}