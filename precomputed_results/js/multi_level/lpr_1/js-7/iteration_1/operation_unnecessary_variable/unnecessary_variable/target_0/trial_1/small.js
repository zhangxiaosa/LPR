function opt() {
    const a = [];
    const b = new Proxy([], Proxy);
    b.valueOf = () => {};
    return isFinite(b);
}