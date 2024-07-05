function opt() {
    const b = new Proxy([], Proxy);
    b.valueOf = function() {};
    return false;
}