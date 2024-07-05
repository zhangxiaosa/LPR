function opt() {
    function a() {}

    const proxyHandler = {};
    const proxyTarget = a;

    new Proxy(proxyTarget, proxyHandler).prototype = undefined;

    const prototypeValue = a;

    const g = a;

    return g;
}