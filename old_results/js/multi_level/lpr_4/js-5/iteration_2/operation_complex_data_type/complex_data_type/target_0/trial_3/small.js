function opt() {
    var a = function() {};
    var proxy = new Proxy(a, {});
    proxy.prototype = undefined;
    var prototypeValue = a;
    prototypeValue = a;
    return a;
}