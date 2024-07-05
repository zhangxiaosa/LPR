function opt() {
    const a = function() {};
    let e = new Proxy(a, {});
    let f;
    e.prototype = f;
    return a;
}