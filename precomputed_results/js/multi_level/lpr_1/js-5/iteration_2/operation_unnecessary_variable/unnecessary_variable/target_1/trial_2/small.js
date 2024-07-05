function opt() {
    function a() {}
    let e = new Proxy(a, {});
    return a;
}