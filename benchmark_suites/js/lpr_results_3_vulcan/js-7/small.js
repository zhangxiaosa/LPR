function opt() {
    b_proxy = new Proxy([], this)
    b_proxy.valueOf = function() {}
    return isFinite(b_proxy)
}