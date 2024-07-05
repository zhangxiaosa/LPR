function opt() {
    function a() {}
    const e = a;
    e.prototype = undefined;
    ({
        "prototype": a
    } = a);
    return a;
}