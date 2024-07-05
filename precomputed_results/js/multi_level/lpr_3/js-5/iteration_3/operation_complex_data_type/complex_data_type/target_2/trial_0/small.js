function opt() {
    function a() {}
    const b = a;
    let e = new Proxy(b, {});
    let ePrototype = undefined;
    ({
        "prototype": ePrototype
    } = b);
    return a;
}