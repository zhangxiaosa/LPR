const b = a;
const d = "Proxy";
const e = new Proxy(b, {});
e.prototype = undefined;
({"prototype": a} = b);
return a;