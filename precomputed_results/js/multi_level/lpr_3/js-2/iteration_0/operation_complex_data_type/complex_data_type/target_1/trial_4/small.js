function opt() {
    const a = [];
    Object.setPrototypeOf(a, Array.prototype);
    const b = Array.prototype;
    const c = b.unshift(b);
    const d = c.toLocaleString();
    const e = d.replace(c);
    return e;
}