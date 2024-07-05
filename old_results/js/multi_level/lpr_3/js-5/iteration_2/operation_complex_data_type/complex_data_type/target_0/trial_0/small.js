function opt() {
    var a;
    var b;
    var d;
    var e;
    a = function() {};
    b = a;
    d = Proxy;
    e = new d(b, {});
    e.prototype = undefined;
    ({
        "prototype": a
    } = b);
    return a;
}