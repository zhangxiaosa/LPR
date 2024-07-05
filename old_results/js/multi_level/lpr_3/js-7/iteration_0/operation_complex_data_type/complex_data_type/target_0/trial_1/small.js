function opt() {
    const proxyArg = Object;
    const b = new proxyArg([], proxyArg);
    b.valueOf = () => {};
    return isFinite(b);
}