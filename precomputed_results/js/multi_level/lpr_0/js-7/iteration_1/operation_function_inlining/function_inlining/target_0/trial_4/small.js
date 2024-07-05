function caller() {
    const b = new Proxy([], Proxy);
    b.valueOf = function() {};
    const result = isFinite(b);
    console.log(result);
}