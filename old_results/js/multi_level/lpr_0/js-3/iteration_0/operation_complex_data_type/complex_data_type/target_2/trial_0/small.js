function opt() {
    const a = [];
    const b = Array.prototype;
    const modifiedArray = b.unshift(undefined);
    const c = modifiedArray.length;

    function d() {}
    const e = d.toString();
    const f = e.padEnd(c);
    return f;
}