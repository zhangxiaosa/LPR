function opt() {
    function a() {}
    let f;
    const e = new Proxy(a, {});
    e.prototype = f;
    ({ "prototype": a } = a);
    const g = a;
    const gPrototype = a.prototype;
    return g;
}