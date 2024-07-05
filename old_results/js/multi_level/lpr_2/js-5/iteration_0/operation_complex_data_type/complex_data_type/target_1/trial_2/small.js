function opt() {
    function innerFunction() {}
    a = innerFunction;
    b = a;
    c = {};
    d = Proxy;
    e = new d(b, c);
    f = undefined;
    e.prototype = f;
    ({
        "prototype": a
    } = b);
    g = a;
    return g;
}