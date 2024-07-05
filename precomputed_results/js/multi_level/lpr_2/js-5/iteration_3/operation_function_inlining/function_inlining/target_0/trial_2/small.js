function opt() {
    function a() {}
    const e = new Proxy(function a() {}, {});
    ({
        "prototype": function a() {}
    } = function a() {});
    return function a() {};
}