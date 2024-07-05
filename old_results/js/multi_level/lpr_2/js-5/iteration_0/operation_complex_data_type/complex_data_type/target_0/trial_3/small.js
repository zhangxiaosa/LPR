function opt() {
    const a = undefined;
    const b = undefined;
    let c = {};
    let d = Proxy;
    let e = new d(b, c);
    let f;
    e.prototype = f;
    ({ "prototype": a } = b);
    const g = a;
}