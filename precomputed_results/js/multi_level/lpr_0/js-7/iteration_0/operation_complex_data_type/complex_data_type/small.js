function opt() {
    const a = [];
    const var1 = a[0];
    const var2 = a[1];
    const var3 = a[2];
    // Continue creating variables for each element in a

    const b = new Proxy(a, Proxy);
    b.valueOf = function() {};
    return isFinite(b);
}