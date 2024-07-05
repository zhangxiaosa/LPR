function opt() {
    const a = [];
    const b = Array.prototype;
    const c = b.unshift(undefined);

    const d = null; // or undefined
    const e = d.toString();
    const f = e.padEnd(c);
    return f;
}