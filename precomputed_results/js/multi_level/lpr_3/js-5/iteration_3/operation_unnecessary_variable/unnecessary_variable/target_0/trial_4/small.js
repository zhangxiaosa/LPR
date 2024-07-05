function opt() {
    function a() {}
    new Proxy(a, {}).prototype = undefined;
    return a;
}