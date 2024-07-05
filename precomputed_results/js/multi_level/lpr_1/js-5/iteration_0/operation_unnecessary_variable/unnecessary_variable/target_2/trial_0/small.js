function opt() {
    function a() {}
    let f;
    a.prototype = f;
    ({
        "prototype": a
    } = a);
    const g = a;
    return g;
}