const a = [];
const b = new Proxy(a, Proxy);
b.valueOf = () => {};
isFinite(b);