function opt() {
    const a = [];
    const b = Object.getPrototypeOf(a);
    const c = b.unshift(undefined);

    const f = ("".toLocaleString()).padEnd(String(c));
    return f;
}