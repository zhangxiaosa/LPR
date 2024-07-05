function opt() {
    // const c = Array.prototype; // Optimize out variable c
    Array.prototype.unshift(9007199254740991);
    const e = Reflect.get([], 127);
    return e;
}