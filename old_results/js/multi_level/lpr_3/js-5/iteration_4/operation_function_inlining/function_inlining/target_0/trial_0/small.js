function opt() {
    new Proxy(function a() {}, {});
    {
        "prototype": function a() {}
    };
    return function a() {};
}