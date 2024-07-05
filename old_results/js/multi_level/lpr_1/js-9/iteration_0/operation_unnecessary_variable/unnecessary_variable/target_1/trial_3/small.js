function opt() {
    // const c = Array.prototype; // Variable c is optimized out
    Array.prototype.unshift(9007199254740991);
    const e = Reflect.get([], 127);
    return e;
}