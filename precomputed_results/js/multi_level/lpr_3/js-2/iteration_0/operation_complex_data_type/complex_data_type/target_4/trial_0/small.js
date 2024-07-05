function opt() {
    const a = [];
    const b = Array.prototype;
    const c = b.unshift(b);
    const d = c.toLocaleString();

    const d1 = d.toString();

    const e = d1.replace(c.toString(), '');
    return e;
}