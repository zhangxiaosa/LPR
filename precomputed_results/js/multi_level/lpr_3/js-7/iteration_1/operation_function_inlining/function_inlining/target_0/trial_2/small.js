const b_proxy = new Proxy([], Proxy);
const b_valueOf = () => {};
b_proxy.valueOf = b_valueOf;
return isFinite(b_proxy);