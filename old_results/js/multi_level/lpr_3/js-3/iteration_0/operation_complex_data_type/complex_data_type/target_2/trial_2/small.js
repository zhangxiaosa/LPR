function opt() {
    const a = [];
    const b = Object.getPrototypeOf(a);
    const c = b.unshift(undefined);

    const cNumber = c;

    function d() {}
    const e = d.toLocaleString();
    const f = e.padEnd(String(cNumber));
    return f;
}