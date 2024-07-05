function opt() {
    const a = [];
    const c = Object.getPrototypeOf(a).unshift(undefined);

    function d() {}
    const e = d.toLocaleString();
    return e.padEnd(String(c));
}