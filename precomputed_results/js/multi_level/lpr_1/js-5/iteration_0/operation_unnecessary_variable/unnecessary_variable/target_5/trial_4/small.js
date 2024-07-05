function opt() {
    function a() {}
    let e = new Proxy(a, {});
    const g = new Proxy(a, {});
    return g;
}