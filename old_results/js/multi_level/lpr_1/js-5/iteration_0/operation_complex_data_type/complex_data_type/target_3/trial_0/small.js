function a() {}
const b = a;
const c = {};
let d = Proxy;
let eTarget = b;
let eHandler = c;
let e = new Proxy(eTarget, eHandler);
let f;
({"prototype": a} = b);
const g = a;
g;