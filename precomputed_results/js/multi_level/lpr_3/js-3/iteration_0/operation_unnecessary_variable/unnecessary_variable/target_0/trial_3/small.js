function opt() {
    const b = Object.getPrototypeOf([]);
    const c = b.unshift(undefined);

    function d() {}
    const e = d.toLocaleString();
    const f = e.padEnd(String(c));
    return f;
}