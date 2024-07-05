function opt() {
    let f;
    const e = new Proxy(function () {}, {});
    e.prototype = f;
    ({
        "prototype": function () {}
    } = function () {});
    const g = function () {};
    return g;
}