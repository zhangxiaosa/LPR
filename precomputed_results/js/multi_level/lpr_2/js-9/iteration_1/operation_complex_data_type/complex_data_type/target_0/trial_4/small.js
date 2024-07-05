function opt() {
    const a = undefined;
    const b = 9007199254740991;
    const c = [];
    c.unshift(b);
    return c[127];
}