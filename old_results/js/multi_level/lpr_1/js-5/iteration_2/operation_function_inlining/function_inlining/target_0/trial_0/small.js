function opt() {
    let e = new Proxy(function a() {}, {});
    e.prototype = undefined;
    return function a() {};
}