const b = new Proxy([], Proxy);
b.valueOf = () => {};
const result = isFinite(b);