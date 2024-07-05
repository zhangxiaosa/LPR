function opt() {
    const a = [];
    const b = [];
    const c = Object.getPrototypeOf(b);
    const d = Array.prototype.unshift.call(c, 9007199254740991);
    const e = a[127];
    return e;
}