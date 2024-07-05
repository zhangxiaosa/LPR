const b = new Proxy([], Proxy);
b.valueOf = () => {};
isFinite(b);