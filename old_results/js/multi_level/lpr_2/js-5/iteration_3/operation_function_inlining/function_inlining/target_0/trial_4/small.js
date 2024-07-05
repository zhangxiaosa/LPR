function opt() {
    const e = new Proxy(function a() {}, {});
    e.prototype = undefined;
}