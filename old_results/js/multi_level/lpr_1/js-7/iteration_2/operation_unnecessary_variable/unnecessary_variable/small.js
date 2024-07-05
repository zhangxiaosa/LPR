function opt() {
    const bProxy = new Proxy([], Proxy);
    bProxy.valueOf = () => {};
    return isFinite(bProxy);
}