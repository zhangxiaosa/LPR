function opt() {
    const b_valueOf = () => {};
    const result = isFinite(new Proxy([], Proxy));
    return result;
}