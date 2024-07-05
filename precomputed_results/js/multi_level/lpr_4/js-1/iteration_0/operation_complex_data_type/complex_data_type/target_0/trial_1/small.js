function opt() {
    const a = "[1, 2, 3]";
    const b = Array.prototype;
    const c = b.unshift(a);
    const d = a.toLocaleString();
    const e = d.padStart(c);
    return e;
}