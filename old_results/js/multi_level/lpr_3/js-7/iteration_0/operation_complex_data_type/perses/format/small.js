function opt() {
    const b_proxy_target = [];
    const b_proxy_handler = Proxy;
    const b_proxy = new b_proxy_handler(b_proxy_target, b_proxy_handler);
    const b_valueOf = () => {};
    b_proxy.valueOf = b_valueOf;
    const result = isFinite(b_proxy);
    return result;
}
