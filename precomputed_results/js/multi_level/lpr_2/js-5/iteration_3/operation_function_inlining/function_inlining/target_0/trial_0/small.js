function opt() {
    const e = new Proxy(function() {}, {});
    e.prototype = undefined;
    return function() {};
}