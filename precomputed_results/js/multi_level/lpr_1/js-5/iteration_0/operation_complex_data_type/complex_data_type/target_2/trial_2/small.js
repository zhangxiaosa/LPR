const a = function() {};
const b = a;
const c = {};
const d = Proxy;
const e = new d(b, c);
const f = undefined;
e.prototype = f;
const g = a;
g;