function opt() {
    function a() {}
    const d = Proxy;
    const e = new d(a, {});
    ({"prototype": a} = a);
    const g = a;
    return g;
}