const a = [];
const b = new Proxy(a, Proxy);
b.valueOf = () => {};
const result = isFinite(b);