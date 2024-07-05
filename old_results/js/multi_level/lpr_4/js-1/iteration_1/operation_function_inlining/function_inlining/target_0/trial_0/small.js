function opt() {
    const a = [Uint8Array];
    const c = a.unshift(a);
    const e = (c + ',' + a.join(',')).padStart(c);
    return e;
}