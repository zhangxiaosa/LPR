const b = new Proxy([], Proxy);
b.valueOf = () => {};
return Number.isFinite(b);