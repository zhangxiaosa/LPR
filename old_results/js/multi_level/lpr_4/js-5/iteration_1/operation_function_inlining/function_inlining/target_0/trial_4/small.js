function opt() {
    new Proxy(function () { }, {}).prototype = undefined;
    ({
        "prototype": function () { }
    } = function () { });
    const g = function () { };
    return g;
}