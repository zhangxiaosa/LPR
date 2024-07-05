function opt() {
    const a = [];
    const b = [];
    Object.setPrototypeOf(b, Array.prototype);
    const c = b.unshift(undefined);

    function d() {}
    const e = d.toLocaleString();
    const f = e.padEnd(String(c));
    return f;
}