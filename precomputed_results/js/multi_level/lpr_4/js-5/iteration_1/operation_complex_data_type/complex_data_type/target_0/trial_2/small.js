function opt() {
    function a() {}
    new Proxy(a, {}).prototype = undefined;
    const g = a;
    return g;
}