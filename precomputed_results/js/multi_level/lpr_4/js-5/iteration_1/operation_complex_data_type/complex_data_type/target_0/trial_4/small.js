function opt() {
    function a() {}
    const proxyHandler = {};
    const proxyTarget = a;
    const proxy = new Proxy(proxyTarget, proxyHandler);
    Object.defineProperty(proxy, 'prototype', { value: undefined });
    const prototypeValue = a;
    const g = prototypeValue;
    return g;
}