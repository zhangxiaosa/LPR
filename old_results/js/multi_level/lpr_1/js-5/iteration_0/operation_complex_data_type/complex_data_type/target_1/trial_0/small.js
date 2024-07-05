function opt() {
    function a() {}
    const b = a;
    const c = {};
    let d = "Proxy";
    let e = new window[d](b, c);
    let f = undefined;
    e.prototype = f;
    ({
        "prototype": a
    } = b);
    const g = a;
    return g;
}