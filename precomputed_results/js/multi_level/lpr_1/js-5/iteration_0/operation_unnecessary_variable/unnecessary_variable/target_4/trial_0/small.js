function opt() {
    function a() {}
    let eTarget = function a() {};
    let e = new Proxy(function a() {}, {});
    let f;
    e.prototype = f;
    ({
        "prototype": a
    } = a);
    const g = a;
    return g;
}