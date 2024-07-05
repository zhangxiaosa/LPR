function opt() {
    const d = Proxy;
    let f;
    const e = new d(function a() {}, {});
    e.prototype = f;
    ({"prototype": function a() {}} = function a() {});
    const g = function a() {};
    return g;
}