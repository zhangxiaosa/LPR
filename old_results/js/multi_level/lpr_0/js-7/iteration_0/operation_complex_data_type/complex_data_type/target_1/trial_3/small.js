function opt() {
    const a = [];
    const var1 = a[0];
    const var2 = a[1];
    const var3 = a[2];

    const b = [];
    let bValue = undefined;

    b.valueOf = function() {
        return bValue;
    };

    return isFinite(b);
}