function opt() {
    let e = new Proxy(function a() {}, {});
    e.prototype = f;
    ({"prototype": a} = e);
    return a;
}