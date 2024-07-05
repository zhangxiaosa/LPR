function opt() {
    const a = [new Uint8Array()];
    const c = a[0];
    const e = c.toLocaleString().padStart(c.toString().length);
    return e;
}