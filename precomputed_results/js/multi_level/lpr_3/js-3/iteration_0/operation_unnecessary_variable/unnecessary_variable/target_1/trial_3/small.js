function opt() {
    const a = [];
    const c = Object.getPrototypeOf(a).unshift(undefined);

    function d() {}
    const e = d.toLocaleString();
    const f = e.padEnd(String(c));
    return f;
}