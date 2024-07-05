function opt() {
    const a = [];
    const b = a;
    const d = Array.isArray(b);
    return d;
}