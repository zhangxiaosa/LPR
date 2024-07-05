function opt() {
    const b = function() {};
    let e = new Proxy(b, {});
    return function() {};
}