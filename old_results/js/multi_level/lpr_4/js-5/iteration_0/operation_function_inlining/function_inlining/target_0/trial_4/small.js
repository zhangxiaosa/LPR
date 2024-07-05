function opt() {
    const a = function() {
    };
    let e = new Proxy(a, {});
    e.prototype = a;
    return a;
}