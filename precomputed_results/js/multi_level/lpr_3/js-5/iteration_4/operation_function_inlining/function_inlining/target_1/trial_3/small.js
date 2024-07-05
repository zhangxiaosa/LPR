function opt() {
    let e = new Proxy(function a() {}, {});
    e.prototype = undefined;
    ({
        "prototype": function a() {}
    } = function a() {});
    return function a() {};
}