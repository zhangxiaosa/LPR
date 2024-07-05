function opt() {
    return isFinite(new Proxy([], Proxy));
}