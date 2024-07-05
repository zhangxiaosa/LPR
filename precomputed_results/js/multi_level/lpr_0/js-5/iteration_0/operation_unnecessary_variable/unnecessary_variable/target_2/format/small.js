function opt() {
    let e = new Proxy(function a() {}, {});
    e.prototype = undefined;
    ({ "prototype": a } = e);
    return a;
}