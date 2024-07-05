function opt() {
    function a() {}
    const proxyTarget = a;
    const proxyHandler = {};
    
    new Proxy(proxyTarget, proxyHandler).prototype = undefined;
    
    const prototypeValue = a;
    const g = a;
    
    return g;
}