function opt() {
    const initialArray = [];
    const b = new Proxy(initialArray, Proxy);
    const valueOfFn = function() {};
    b.valueOf = valueOfFn;
    return isFinite(b);
}