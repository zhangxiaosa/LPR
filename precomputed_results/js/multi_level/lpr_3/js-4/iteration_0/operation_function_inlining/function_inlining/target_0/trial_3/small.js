const a = [];
const b = a.__proto__;
const c = b.unshift(4294967297);
b.length = 256;
const f = b.pop();
const g = f;
return g;