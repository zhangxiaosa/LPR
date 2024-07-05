function opt() {
    const a = [];
    const b = Array.prototype;
    const unshiftResult = b.unshift(undefined);
    const c = unshiftResult;

    function d() {}
    const e = d.toString();
    const f = e.padEnd(c);
    return f;
}