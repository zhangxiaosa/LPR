function opt() {
    function a() {}
    const e = new Proxy(a, {});
    const g = a;
    return g;
}