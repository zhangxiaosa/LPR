function opt() {
    function a() {}
    let f;
    (new Proxy(a, {})).prototype = f;
    ({
        "prototype": a
    } = a);
    const g = a;
    return g;
}