function opt() {
    const b = [].__proto__;
    const c = b.unshift(b);
    const d = c.toLocaleString();
    const e = d.replace(c);
    return e;
}