const a = [];
const b = new Proxy(a, Proxy);
const c = () => {};
b.valueOf = c;
const d = isFinite(b);
return d;