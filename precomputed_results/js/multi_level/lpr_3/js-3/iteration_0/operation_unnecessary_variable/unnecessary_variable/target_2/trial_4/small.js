function opt() {
    const a = [];
    const b = Object.getPrototypeOf(a);
    b.unshift(undefined);

    function d() {}
    const e = d.toLocaleString();
    const f = e.padEnd(String(1));
    return f;
}