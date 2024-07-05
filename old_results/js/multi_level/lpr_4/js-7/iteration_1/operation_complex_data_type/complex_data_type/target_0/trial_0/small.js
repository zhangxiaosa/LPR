function opt() {
    const proxyHandler = Proxy;
    const proxyTarget = [];
    const b = proxyHandler(proxyTarget, proxyHandler);
    b.valueOf = function() {};
    return isFinite(b);
}