function opt() {
    function a() {}
    let e = new Proxy(a, {});
    let f;
    return a;
}