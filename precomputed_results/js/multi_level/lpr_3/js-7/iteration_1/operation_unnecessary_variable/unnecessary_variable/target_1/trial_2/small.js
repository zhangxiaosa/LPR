function opt() {
    const b_proxy = new Proxy([], Proxy);
    return isFinite(b_proxy);
}