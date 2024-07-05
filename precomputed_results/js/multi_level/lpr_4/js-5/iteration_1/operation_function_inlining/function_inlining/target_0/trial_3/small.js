function opt() {
    new Proxy(function () {}, {}).prototype = undefined;
    ({
        "prototype": function () {}
    } = function () {});
    return function () {};
}