function opt() {
    let e = new Proxy(function a() {}, {});
    return e;
}