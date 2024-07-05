function opt() {
    function a() {}
    let eTarget = a;
    // let e = new Proxy(eTarget, {});
    let f;
    // e.prototype = f;
    ({
        "prototype": a
    } = a);
    const g = a;
    return g;
}