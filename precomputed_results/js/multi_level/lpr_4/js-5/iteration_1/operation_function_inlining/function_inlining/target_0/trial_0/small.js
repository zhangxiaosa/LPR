function opt() {
    new Proxy(function a() {}, {}).prototype = undefined;
    ({"prototype": function a() {}} = function a() {});
    const g = function a() {};
    return function a() {};
}