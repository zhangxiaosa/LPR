function opt() {
    const a = [];
    const b = Array.prototype;
    const bLength = b.unshift(b);
    const c = bLength.toLocaleString();
    const d = c.replace(bLength);
    return d;
}