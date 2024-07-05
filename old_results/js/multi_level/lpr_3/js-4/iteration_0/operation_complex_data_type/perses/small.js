function opt() {
    const b = Array.prototype;
    b.unshift(4294967297);
    b.length = 256;
    const e = b.pop();
    const f = e;
    return f;
}