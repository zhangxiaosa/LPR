function opt() {
    const b_proxy = new Proxy([], Proxy);
    const b_valueOf = () => {};
    b_proxy.valueOf = b_valueOf;
    
    const proxyTarget = b_proxy[ProxyTarget];
    const proxyHandler = b_proxy[ProxyHandler];
    
    const arrayLength = b_proxy.length;
    
    return isFinite(arrayLength);
}