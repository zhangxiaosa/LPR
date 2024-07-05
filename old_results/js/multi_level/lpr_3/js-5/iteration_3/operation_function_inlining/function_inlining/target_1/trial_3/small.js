function opt() {
    let e = new Proxy(function a() {}, {});
    a.prototype = undefined;
    return function a() {};
}