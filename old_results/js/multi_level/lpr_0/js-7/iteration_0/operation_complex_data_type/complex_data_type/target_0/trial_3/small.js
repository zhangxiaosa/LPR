const a = [];
const b = new Proxy(a, Proxy);
b.valueOf = function() {};
const result = isFinite(b);