function opt() {
    function a() {}
    const b = a;
    const c = {};
    const ProxyConstructor = Proxy;
    const proxyArguments = [b, c];
    const d = new ProxyConstructor(...proxyArguments);
    let f;
    d.__proto__ = f;
    ({"prototype": a} = b);
    const g = a;
    return g;
}