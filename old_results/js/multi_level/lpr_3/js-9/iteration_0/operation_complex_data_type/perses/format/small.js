function opt() {
    const a = [];
    const c = Array.prototype;
    const unshiftedValue = 9007199254740991;
    c.unshift(unshiftedValue);
    return a[127];
}
