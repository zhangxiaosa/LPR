function opt() {
    const b_proxy = new Proxy([], Proxy);
    const result = isFinite([]);
    return result;
}