function opt() {
    // const c = Array.prototype; // Optimize out variable c
    // const d = Array.prototype.unshift(9007199254740991); // Remove variable c and replace references with Array.prototype
    const e = Reflect.get([], 127);
    return e;
}