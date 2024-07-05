function opt() {
    const b_target = [];
    const b_handler = Proxy;
    const b = new b_handler(b_target, b_handler);
    b.valueOf = function() {};
    return isFinite(b);
}