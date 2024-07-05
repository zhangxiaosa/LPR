function opt() {
    function a() {}
    let f;
    const e = new Proxy(a, {});
    const prototype = {};
    e.prototype = prototype;
    ({
        "prototype": a
    } = a);
    const g = a;
    return { e, prototype, g };
}