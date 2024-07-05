function opt() {
    const a = [];
    const b = Object.getPrototypeOf(a);
    const c = b.unshift(undefined);

    function d() {}
    const f = d.toLocaleString().padEnd(String(c));
    return f;
}