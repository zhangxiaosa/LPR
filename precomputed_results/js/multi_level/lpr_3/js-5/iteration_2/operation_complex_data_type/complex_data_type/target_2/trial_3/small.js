function opt() {
    function a() {}
    const b = a;
    const d = Proxy;
    const e = new d(b, {});
    return a;
}