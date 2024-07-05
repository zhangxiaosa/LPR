function opt() {
    const bArray = [];
    const bProxy = new Proxy(bArray, Proxy);
    bProxy.valueOf = () => {};
    return isFinite(bProxy);
}
